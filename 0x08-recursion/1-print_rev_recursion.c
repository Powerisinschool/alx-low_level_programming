#include "main.h"

/**
 * _print_rev_recursion - a function that prints recursively
 * Description: a function that prints recursively
 * @s: character
 */

void _print_rev_recursion(char *s)
{
	char *r = s;

	while (*(r + 1) != '\0')
		r++;

	if (*r)
	{
		_putchar(*r);
		_print_rev_recursion(--r);
	} else
	{
		_putchar('\n');
	}
}
