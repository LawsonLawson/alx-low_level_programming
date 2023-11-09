#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - This function prints numbers
 *
 * @separator: This is the pointer to the string that separates respective
 * numbers
 *
 * @n: The number of numbers to be printed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int number;
	unsigned int x;
	va_list arg;

	if (n > 0)
	{
		va_start(arg, n);

		x = 0;
		do {
			number = va_arg(arg, int);
			printf("%d", number);
			if (x <= (n - 2) && separator != NULL && n > 1)
			{
				printf("%s", separator);
			}
			x++;
		} while (x < n);
		va_end(arg);
	}
	printf("\n");
}
