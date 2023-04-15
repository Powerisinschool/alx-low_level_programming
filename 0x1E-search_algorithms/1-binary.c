#include <math.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if array is NULL or
 * value is not present in array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, m, L = 0;
	size_t R = size - 1;

	if (!array)
		return (-1);

	while (L <= R)
	{
		m = floor((L + R) / 2.0);
		printf("Searching in array: ");
		for (i = L; i < R; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			L = m + 1;
		else
			R = m - 1;
	}

	return (-1);
}
