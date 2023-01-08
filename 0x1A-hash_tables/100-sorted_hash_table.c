#include "hash_tables.h"

shash_node_t *create_node(const char *key, const char *value);

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the array
 *
 * Return: Pointer to the newly created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->shead = NULL;
	ht->stail = NULL;

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}

/**
 * shash_table_set - Set the value for a key in a sorted hash table
 * @ht: The sorted hash table
 * @key: The key to set
 * @value: The value to set
 *
 * Return: 1 if the key/value pair was successfully set, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;
	char *key_copy, *value_copy;
	unsigned long int index;
	shash_node_t *curr;
	shash_node_t *temp;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	key_copy = strdup(key);
	if (key_copy == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(key_copy);
		return (0);
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(key_copy);
		free(value_copy);
		return (0);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;

	index = key_index((const unsigned char *) key, ht->size);

	if (ht->array[index] == NULL)
		ht->array[index] = new_node; /* Array is empty, so insert node at head */
	else
	{
		/* Find the tail of the linked list */
		curr = ht->array[index];
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new_node;
	}

	/* Determine position to insert node into the sorted linked list */
	if (ht->shead == NULL)
	{
		/* The list is empty, so insert the node at the start */
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(new_node->key, ht->shead->key) < 0)
	{
		/* The node belongs at the start of the list */
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else if (strcmp(new_node->key, ht->stail->key) > 0)
	{
		/* The node belongs at the end of the list */
		new_node->sprev = ht->stail;
		new_node->snext = NULL;
		ht->stail->snext = new_node;
		ht->stail = new_node;
	}
	else
	{
		/* The node belongs somewhere in the middle of the list */
		temp = ht->shead;
		while (strcmp(temp->key, new_node->key) < 0)
		{
			temp = temp->snext;
		}
		new_node->sprev = temp->sprev;
		new_node->snext = temp;
		temp->sprev->snext = new_node;
		temp->sprev = new_node;
	}

	return (1);
}

/**
 * shash_table_get - Get the value for a key in a sorted hash table
 * @ht: The sorted hash table
 * @key: The key to get
 *
 * Return: The value for the key, or NULL if the key does not exist
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *curr;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Print a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;

	putchar('{');
	curr = ht->shead;
	while (curr != NULL)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		if (curr->snext != NULL)
			printf(", ");
		curr = curr->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print a sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;

	putchar('{');
	curr = ht->stail;
	while (curr != NULL)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		if (curr->sprev != NULL)
			printf(", ");
		curr = curr->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t  *curr;
	shash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	/* Free the nodes in the hash table */
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			temp = curr;
			curr = curr->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	/* Free the hash table array and the table itself */
	free(ht->array);
	free(ht);
}
