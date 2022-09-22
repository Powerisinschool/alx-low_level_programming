#include "main.h"

/**
 * reverse_array - function to reverse the content of an agenda
 * @a: array
 * @n: number of elements in array
 * Return:
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;

	for (i = 0; i < n; i++)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
