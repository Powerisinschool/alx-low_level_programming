#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: input string to be printed
 * Description: prints second half of string
 *
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
		i++;

	j = i / 2;
		if (i % 2 == 1)
			j++;
	while  (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
