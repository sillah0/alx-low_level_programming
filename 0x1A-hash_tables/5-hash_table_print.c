#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int n;
	unsigned char comma_flag_s = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			if (comma_flag_s == 1)
				printf(", ");

			node = ht->array[n];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag_s = 1;
		}
	}
	printf("}\n");
}
