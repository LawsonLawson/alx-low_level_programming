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
	int number = n;


	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (number / 10 > 0)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + 48);
}
