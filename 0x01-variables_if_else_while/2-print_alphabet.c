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


	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
