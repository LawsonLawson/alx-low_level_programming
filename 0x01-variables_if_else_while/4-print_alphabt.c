#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char n = 97;


	while (n <= 122)
	{
		if (!(n == 101 || n == 113))
				{
				putchar(n);
				}
				n++;
	}
	putchar('\n');

	return (0);
}
