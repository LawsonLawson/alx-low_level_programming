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


	for (t = '0'; t <= '9'; t++)
	{
		for (o = (t + 1); o <= '9'; o++)
		{
			putchar(t);
			putchar(o);
			if (t != '8' || o != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
