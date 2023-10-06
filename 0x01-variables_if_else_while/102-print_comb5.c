#include <stdio.h>

/**
 * main - prints all number possible different combinations
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int t;
	int o;


	for (t = 0; t < 100; t++)
	{
		for (o = 0; o < 100; o++)
		{
			if (t < o)
			{
				putchar((t / 10) + 48);
				putchar((t % 10) + 48);
				putchar((' '));
				putchar((o / 10) + 48);
				putchar((o % 10) + 48);
			}
			if (t != 98 || o != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
