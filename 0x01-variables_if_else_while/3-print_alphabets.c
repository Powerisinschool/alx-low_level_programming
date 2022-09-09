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
	int ch;
	char alphabetsLower[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetsUpper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
