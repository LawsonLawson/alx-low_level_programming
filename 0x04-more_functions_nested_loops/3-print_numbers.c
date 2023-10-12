#include "main.h"
#include <stdio.h>

/**
 * print_numbers - This function prints numbers from 0 to 9
 *
 * Return: 0 (Success)
 */
void print_numbers(void)
{
	char number = '0';

	while (number <= '9')
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
