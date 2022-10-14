#include "variadic_functions.h"

/**
 * print_strings - print a list of strings
 *
 * @separator: The separator between strings
 * @n: count of arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *s;
	u_int i = 1;

	va_start(ap, n);

	if (!separator)
		separator = "";

	if (n >= 1)
		printf("%s", va_arg(ap, char*));

	for (; i < n; i++)
	{
		s = va_arg(ap, char*);
		if (!s)
			s = "(nil)";
		printf("%s%s", separator, s);
	}
	putchar('\n');
	va_end(ap);
}
