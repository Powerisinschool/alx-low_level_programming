#include "variadic_functions.h"

/**
 * print_numbers - print a list of numbers
 *
 * @separator: The separator between numbers
 * @n: count of arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	u_int i = 1;

	va_start(ap, n);

	if (separator == NULL)
		return;

	if (n >= 1)
		printf("%d", va_arg(ap, int));

	for (; i < n; i++)
		printf("%s%d", separator, va_arg(ap, int));
	putchar('\n');

	va_end(ap);
}
