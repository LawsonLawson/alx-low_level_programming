#include "main.h"


/**
 * print_last_digit - Prints the last digit of a given number.
 * @n: The number we are working with
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	/*ld(short) for last_digit*/
	int ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');

	return (ld);
}
