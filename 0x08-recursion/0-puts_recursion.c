#include "main.h"

/**
 * _puts_recursion - a function that prints recursively
 * Description: a function that prints recursively
 * @s: character
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
	{
		_putchar('\n');
	}
}
