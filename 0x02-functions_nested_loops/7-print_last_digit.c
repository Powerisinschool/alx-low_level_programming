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
	int lastDigit = (_abs(n) % 10);

	_putchar(lastDigit + '0');
	return (lastDigit);
}
