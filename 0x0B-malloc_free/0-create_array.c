#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size:  size of the array
 * @c: string
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	i = 0;
	x = malloc(sizeof(char) * size);

	if (x == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	while (i < size)
	{
		x[i] = c;
		i++;
	}
	return (x);
}
