#include "hash_tables.h"

/**
 * hash_table_get - get thr value associated with
 * a key in a hash table
 * @ht: a pointer to the hash table
 * @key: key to get the value of
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	node = ht->array[indx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
