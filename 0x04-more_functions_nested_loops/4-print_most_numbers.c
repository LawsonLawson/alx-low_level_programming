#include "main.h"

/**
 * print_most_numbers - This function prints numbers from 0 to 9
 * while excluding 2 and 4
 *
 * Return: void (Success)
 */
void print_most_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
	if (!(number == '2' || number == '4'))
	_putchar(number);
	}
	_putchar('\n');
}
