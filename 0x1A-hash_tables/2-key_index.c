#include "hash_tables.h"

/**
 * key_index - returns the index of a given key
 * @key: The key to find the index
 * @size: The size of the hash_table
 *
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
