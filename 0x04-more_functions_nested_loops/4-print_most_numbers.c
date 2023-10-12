#include "main.h"
#include <stdio.h>

/**
 * print_numbers - This function prints numbers from 0 to 9
 * except for 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char c = '0';

	do {
		if (c == '2' || c == '4')
		{
			c++;
			continue;
		}
		_putchar(c);
		c++;
	} while (c <= '9');
	_putchar('\n');
}
