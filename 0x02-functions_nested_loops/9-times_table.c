#include "main.h"

/**
 * times_table - The 9 times table beginning from 0
 *
 * no Return value
 */
void times_table(void)
{
	/* n for number, p for the product, and result of the answer*/
	int n, p, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);

		for (p = 1; p <= 9; p++)
		{
			_putchar(',');
			_putchar(' ');

			result  = n * p;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + 48);

			_putchar((result % 10) + 48);
		}
		_putchar('\n');
	}
}
