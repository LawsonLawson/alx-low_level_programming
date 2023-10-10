#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char n;
	int m;

	for (m = 0; m <= 9; m++)
	{
		for (n = 97; n <= 122; n++)
			_putchar(n);
		_putchar('\n');
	}
}
