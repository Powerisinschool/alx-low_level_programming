#include "main.h"

/**
 *
 *
 *
 *
 */

int _is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	} else if (n % i == 0)
	{
		return (0);
	} else
	{
		return (_is_prime(n, i - 1));
	}
}

int is_prime_number(int n)
{
	return (_is_prime(n, n/2));
}
