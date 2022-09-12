#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints all combinations of 2 different digits, no reprtition'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d1, d2, x1, x2;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = '0'; d2 <= '9'; d2++)
		{
			x1 = d1 - '0';
			x2 = d2 - '0';
			if (d1 == d2 || d2 == '0' || x2 < x1 + 1)
			{
				continue;
			}
			if (d2 != '1')
			{
				putchar(',');
				putchar(' ');
			}
			putchar(d1);
			putchar(d2);
		}
	}
	putchar('\n');
	return (0);
}
