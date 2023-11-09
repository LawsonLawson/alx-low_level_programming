#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - This function prints a string
 *
 * @separator: The argument that separates the strings
 *
 * @n: The number of strings to print
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int x;
	va_list string;

	if (n > 0)
	{
		va_start(string, n);
		for (x = 0; x < n; x++)
		{
			str = va_arg(string, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
			if (x <= (n - 2) && separator != NULL && n > 1)
			{
				printf("%s", separator);
			}
		}
		va_end(string);
	}
	printf("\n");
}
