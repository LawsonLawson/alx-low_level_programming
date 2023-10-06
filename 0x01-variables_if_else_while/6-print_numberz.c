#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the last single digits in base 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;


	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	{
		putchar('\n');
	}

	return (0);
}
