#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, sum;

	for (i = 1; i < 1024; i++)
	{
		if ((i * 3) < 1024)
		{
			sum += i * 3;
		} else if ((i * 5) < 1024)
		{
			sum += i * 5;
		} else
		{
			break;
		}
	}
	printf("%d\n", sum);
}
