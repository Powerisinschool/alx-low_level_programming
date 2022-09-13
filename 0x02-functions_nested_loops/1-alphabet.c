#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
