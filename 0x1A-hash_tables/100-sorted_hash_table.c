#include "hash_tables.h"

shash_node_t *create_node(const char *key, const char *value);

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *table;

	table = (shash_table_t *) malloc(sizeof(shash_table_t));
	table->size = size;
	table->array = (shash_node_t **) calloc(table->size, sizeof(shash_node_t *));
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *) key, ht->size);
	shash_node_t *node = ht->array[index];
	shash_node_t *new_node;

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);

	if (node == NULL)
	{
		new_node = malloc(sizeof(shash_node_t));
		if (new_node == NULL)
			return (NULL);

		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		new_node->snext = NULL;
		new_node->sprev = NULL;

		ht->array[index] = new_node;

		addToOrder(new_node, shead, stail);
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
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	(void) ht;
	(void) key;
	return "";
}

void shash_table_print(const shash_table_t *ht)
{
	(void) ht;
}

void shash_table_print_rev(const shash_table_t *ht)
{
	(void) ht;
}

void shash_table_delete(shash_table_t *ht)
{
	(void) ht;
}
