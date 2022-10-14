#include "variadic_functions.h"

/**
 * sum_them_all - Sum all functions
 *
 * @n: count of arguments (int)
 *
 * Return: Sum of inputs
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	u_int i = 0;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
