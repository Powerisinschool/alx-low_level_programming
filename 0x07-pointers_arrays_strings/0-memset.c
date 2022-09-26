#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: character 1
 * @b: character 2
 * @n: integer
 * Return: a pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
