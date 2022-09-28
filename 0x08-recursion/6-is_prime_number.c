#include "main.h"

/**
 *
 *
 *
 *
 */

int is_prime_number(int n)
{
	is_prime(n, n/2);
}

int is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	} else if (n % i == 0)
	{
		return (0);
	} else
	{
		return (n, i -1);
	}
}
