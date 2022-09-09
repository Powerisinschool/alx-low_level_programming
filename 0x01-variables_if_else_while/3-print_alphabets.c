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
	int i = 0;
	char alphabetsLower[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetsUpper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		putchar(alphabetsLower[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alphabetsUpper[i]);
	}
	return (0);
}
