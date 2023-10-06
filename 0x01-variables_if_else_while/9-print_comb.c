#include <stdio.h>


/**
 * main - prints the last single digits in base 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;


	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
