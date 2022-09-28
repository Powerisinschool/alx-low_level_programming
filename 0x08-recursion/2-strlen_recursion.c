#include "main.h"

/**
 * _strlen_recursion - returns length of string
 *
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = 1;
		i += _strlen_recursion(++s);
	}

	return (i);
}
