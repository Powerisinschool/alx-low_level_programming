#include "hash_tables.h"


/**
 * hash_table_create - Create Hash Table
 *
 * @size: int
 * Description: 'Create an empty hash table'
 *
 * Return: Pointer to hash table (Success) or NULL (failure)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	(void) size;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
