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
	hash_node_t *node = ht->array[index];

	while (1)
	{
		if (node == NULL)
			return (NULL);
		if (strcmp(node->key, key) == 0)
		{
			value = node->value;
			break;
		}
		node = node->next;
	}

	return (value);
}
