#include "hash_tables.h"

/**
 * key_value - gives a index of a key in the hash table array
 * @key: key
 * @size: size of array
 * 
 * Return:index to store value
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
