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
	char number = '0';

	do {
		if (number == '2' || number == '4')
		{
			number++;
			continue;
		}
		_putchar(number);
		number++;
	} while (number <= '9');
	_putchar('\n');
}
