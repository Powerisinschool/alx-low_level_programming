#include "main.h"

/**
 *
 *
 *
 *
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);
	return (_sqrt(0, n, n);
}

int _sqrt(int l, int h, int n)
{
	int m;
	if (l <= h)
	{
		m = (l + h) / 2
		if ((m * m <= n) && ((m + 1) * (m + 1) > n))
		{
			return (m);
		} else if (m * m < n)
		{
			return (_sqrt(m+1, h, n);
		} else
		{
			return _sqrt(m, m-1, n);
		}
	}
}
