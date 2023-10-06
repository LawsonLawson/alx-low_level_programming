#include <stdio.h>

/**
 * main - prints different possible numbers by combination
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k;


	for (i = 48; i <= 52; i++)
	{
		for (j = i + 1; j <= 53; j++)
		{
			for (k = j + 1; k <= 54; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 50)
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
