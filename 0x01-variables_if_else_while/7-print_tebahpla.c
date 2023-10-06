#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints alphabets in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char n;


	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
