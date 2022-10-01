#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Arguments
 * Return: 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
