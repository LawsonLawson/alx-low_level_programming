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


	for (t = 0; t <= 98; t++)
	{
		for (o = (t + 1); o <= 99; o++)
		{
			if (t < o)
			{
				putchar((t / 10) + '0');
				putchar((t % 10) + '0');
				putchar((' '));
				putchar((o / 10) + '0');
				putchar((o % 10) + '0');
			}
			if (t == 98 && o == 99)
				continue;
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
