#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of
 * a string to uppercase
 * @str: string to be changed
 * Return: char
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return (str);
}
