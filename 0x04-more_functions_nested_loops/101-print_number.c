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
	unsigned int number = n;


	if (n < 0)
	{
		n *= -1;
		number = n;
		_putchar('-');
	}
	number = number / 10;
	if (number != 0)
	{
		print_number(number);
	}
	_putchar((unsigned int) n % 10 + 48);
}
