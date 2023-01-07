#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int size = 0;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node == NULL)
			continue;
		if (size > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		size++;
	}
	putchar('}');
	putchar('\n');
}