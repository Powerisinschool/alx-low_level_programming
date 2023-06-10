#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: string pointer
 * @src: buffer pointer
 *
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
			return (dest);
		i++;
	}
	return (dest);
}
