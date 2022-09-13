#include "main.h"

/**
 * print_sign - Entry point
 * @n: 'integer n'
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
