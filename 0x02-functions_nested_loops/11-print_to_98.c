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
	for (; n <= 97; n++)
	{
		printf(n);
		_putchar(',');
		_putchar(' ');
	}
	printf("98\n");
}
