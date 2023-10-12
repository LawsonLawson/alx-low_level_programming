#include "main.h"

/**
 * print_square - This funciton prints a square of a given size
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int m, n;

	if (size <= 0)
		_putchar('\n');

	for (m = 0; m < size; m++)
	{
		n = 0;
		do {
			_putchar('#');
			n++;
		} while (n < (size));
		_putchar('\n');
	}
}
