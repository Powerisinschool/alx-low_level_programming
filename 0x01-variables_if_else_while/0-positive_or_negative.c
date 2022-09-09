#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'Print if a random value is positive or negative or zero'
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d", n);
	if (n > 0)
	{
		printf(" is positive");
	} else if (n == 0)
	{
		printf(" is zero");
	} else
	{
		printf(" is negative");
	}
	printf("\n");
	return (0);
}
