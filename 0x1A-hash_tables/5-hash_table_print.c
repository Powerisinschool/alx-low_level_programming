#include "hash_tables.h"

/**
 * hash_table_print - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int size = 0;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (size > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			size++;
		}
	}
	putchar('}');
	putchar('\n');
}
