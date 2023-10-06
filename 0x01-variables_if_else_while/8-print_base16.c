#include <stdio.h>


/**
 * main - prints alphabets in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char n;
	char m;


	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');

	return (0);
}
