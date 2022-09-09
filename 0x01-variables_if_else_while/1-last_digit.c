#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;

	printf("Last digit of %d is %d and is ", n, lastDigit);
	if (lastDigit > 5)
	{
		printf("greater than 5");
	} else if (lastDigit == 0)
	{
		printf("0");
	} else
	{
		printf("less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
