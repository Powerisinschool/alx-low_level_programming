#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string
 * returns NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;
	duplicate = malloc(sizeof(char) * (l + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[l] = '\0';

	return (duplicate);
}
