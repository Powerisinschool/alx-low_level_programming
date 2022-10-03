#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **strtow(char *str)
{
	char *input = NULL;
	int i = 0;
	char **result = malloc(strlen(str) + 1);

	if (str != NULL)
		input = str;

	if (input == NULL)
		return NULL;

	for (; input[i] != '\0'; i++)
	{
		if (input[i] != ' ')
			result[i] = *input[i];
		else
		{
			result[i] = '\0';
			input = input + i + 1;
			return result;
		}
	}
	result[i] = '\0';
	input = NULL;
	return result;
}
