#include "main.h"

/**
 * _is_prime - function to check prime
 * @n: int
 * @i: int
 * Return: int
 */

int _is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_is_prime(n, i - 1));
}

/**
 * is_prime_number - function to check prime
 * @n: int
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	return (_is_prime(n, n / 2));
}
