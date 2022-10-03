#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: point to a newly allocated space in memory
 * which contains the contents of s1,
 *  function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_i = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	concat_str = malloc(sizeof(char) * l);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
}
