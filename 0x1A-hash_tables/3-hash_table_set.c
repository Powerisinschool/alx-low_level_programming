#include "hash_tables.h"
hash_node_t *create_node(const char *key, const char *value);

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 on success, 0 on failurre
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *) key, ht->size);
	hash_node_t *node = ht->array[index];
	hash_node_t *new_node;

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);

	if (node == NULL)
	{
		new_node = create_node(key, value);
		ht->array[index] = new_node;
		return (1);
	}
		while (1)
	{
			if (node->next == NULL)
			{
				new_node = create_node(key, value);
				node->next = new_node;
				break;
			}
		}
	return (0);
}

/**
 * create_node - create a new node
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 on success, 0 on failurre
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
