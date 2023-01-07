#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
  unsigned long int index = key_index((const unsigned char *) key, ht->size);
  char *value;
  if (ht->array[index] == NULL)
	return NULL;
  value = ht->array[index]->value;

  return value;
}
