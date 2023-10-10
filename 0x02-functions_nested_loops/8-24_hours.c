#include "main.h"


/**
 * jack_bauer - Prints minutes of the day in the life of Jack Bauer
 * beginning from 00:00 to 23:59
 *
 * No Return value
 */
void jack_bauer(void)
{
	/*h (short) for hours, m (short) for minutes*/
	int m, h;


	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}
	}
}
