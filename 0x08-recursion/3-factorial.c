#include "main.h"

/**
 * factorial - function to find factorial of n
 * @n: integer
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
