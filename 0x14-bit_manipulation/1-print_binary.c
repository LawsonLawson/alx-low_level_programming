#include "main.h"

/**
 * print_binary - prints the binary rep of a number
 *
 * @n: the number to be converted and printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/** Base case: if the number is greater than 1, keep dividing by 2 */
	if (n > 1)
	{
		/* Right shift by 1 and divide by 2 */
		print_binary(n >> 1);
	}
	/* Print the least significant bit of the current number*/
	_putchar((n & 1) + '0');
}
