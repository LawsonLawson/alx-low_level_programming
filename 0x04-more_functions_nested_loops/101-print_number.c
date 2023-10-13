#include "main.h"
#include <stdio.h>


/**
 * print_number - This function prints an integer using a special
 * function called _putchar
 * @n: The argument passed into this function
 *
 * Return: 0 CSuccess)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + 48);
}
