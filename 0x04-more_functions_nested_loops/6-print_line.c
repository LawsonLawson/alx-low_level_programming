#include "main.h"

/**
 * print_line - This funtion prints new lines
 * @n: The number of lines we are printing
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;


	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
