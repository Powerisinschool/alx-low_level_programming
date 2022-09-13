#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
}
