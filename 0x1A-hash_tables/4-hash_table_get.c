#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with key if found, NULL if failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *) key, ht->size);
	char *value;

	if (ht->array[index] == NULL)
		return (NULL);
	value = ht->array[index]->value;

	return (value);
}
