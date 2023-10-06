#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints alphabets in lowercase and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char n;
	char m;


	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	for (m = 65; m <= 90; m++)
	{
		putchar(m);
	}
	putchar('\n');

	return (0);
}
