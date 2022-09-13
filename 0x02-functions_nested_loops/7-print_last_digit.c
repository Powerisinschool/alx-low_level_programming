#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - Entry point
 * @n: 'integer n'
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	n = _abs(n);
	_putchar((n % 10) + '0');
	return (n % 10);
}
