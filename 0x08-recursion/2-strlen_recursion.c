#include "main.h"

/**
 * _strlen_recursion - returns length of string
 *
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s)
	{
		i += _strlen_recursion(++s);
	}

	return (i);
}
