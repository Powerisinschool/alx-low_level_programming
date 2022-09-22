#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @d: string to be converted
 * Return: string d
 */

char *leet(char *d)
{
	int i, j;
	char *replace;

	replace = "aAeEoOtTlL4433007711";

	for (i = 0; d[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (d[i] == replace[j])
				d[i] = replace[j + 10];
		}
	}
	return (d);
}
