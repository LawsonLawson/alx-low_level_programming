#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function sums all given parameters
 *
 * @n: The total number of parameters
 *
 * Return: The sum or 0 if n is less than 1
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list args;

	if (n < 1)
	{
		return (0);
	}
	va_start(args, n);

	x = 0;
	do {
		sum += va_arg(args, int);
		x++;
	} while (x < n);
	va_end(args);

	return (sum);
}
