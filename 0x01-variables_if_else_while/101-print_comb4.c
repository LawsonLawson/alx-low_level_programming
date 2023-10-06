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
	int m;


	for (m = '0'; m <= '9'; m++)
	{
		for (t = (m + 1); t <= '9'; t++)
		{
			for (o = (t + 1); o <= '9'; o++)
			{
				putchar(m);
				putchar(t);
				putchar(o);
				if (m != '7' || t != '8' || o != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
