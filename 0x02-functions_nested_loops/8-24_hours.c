#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2;
	for (h1 = 0; h1 <= 2; h1++)
	{
		for (h2 = 0; h2 <= 3; h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					putchar(h1 + '0');
					putchar(h2 + '0');
					putchar(m1 + '0');
                                        putchar(m2 + '0');
				}
			}
		}
	}
	return (0);
}
