#include "main.h"

/**
 * _print_rev_recursion - a function that prints recursively
 * Description: a function that prints recursively
 * @s: character
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
