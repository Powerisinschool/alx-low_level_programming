#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: 'Integer n'
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d", n);
			_putchar(',');
			_putchar(' ');
		}
	} else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d", n);
			_putchar(',');
			_putchar(' ');
		}
	}
	printf("98\n");
}
