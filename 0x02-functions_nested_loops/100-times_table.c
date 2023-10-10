#include "main.h"

/**
 * print_times_table - Prints the times tables of a given input
 * beginning from 0
 * @n: The number of times the table has to be printed
 */
void print_times_table(int n)
{
	/* i for number/integer, p for product and result for the answer*/
	int i, p, result;


	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);

			for (p = 1; p <= n; p++)
			{
				_putchar(',');
				_putchar(' ');

				result = i * p;

				if (result <= 'c')
					_putchar(' ');
				if (result <= 9)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + 48);
					_putchar(((result / 10)) % 10 + 48);
				}
				else if
					(result <= 'c' && result >= 10)
				{
					_putchar((result / 10) + 48);
				}
				_putchar((result % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
