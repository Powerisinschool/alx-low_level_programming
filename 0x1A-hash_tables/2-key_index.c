#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
  unsigned long int index;

  (void) size;

  index = hash_djb2(key);

  return (index);
}