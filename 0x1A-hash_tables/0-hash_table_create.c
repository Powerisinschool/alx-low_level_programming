#include "hash_tables.h"

unsigned long hash_function(char* str, unsigned long int size) {
  unsigned long i = 0;
  int j;
  for (j=0; str[j]; j++)
    i += str[j];
  return i % size;
}

hash_table_t *hash_table_create(unsigned long int size) {
  unsigned long int i;
  hash_table_t* table;

  (void) size;

  table = (hash_table_t*) malloc (sizeof(hash_table_t));
  table->size = size;
  table->array = (hash_node_t**) calloc (table->size, sizeof(hash_node_t*));
  for (i=0; i<table->size; i++)
    table->array[i] = NULL;
  return table;
}
