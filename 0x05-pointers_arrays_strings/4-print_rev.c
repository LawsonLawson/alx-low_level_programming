#include "main.h"

/**
 * print_rev - This function prints a given string of text in reverse
 * followed by a new line
 * @s: In this case, the string of text we are to print
 *
 * Return: 0 (success)
 */
void print_rev(char *s)
{
	int n = 0;


	while (s[n])
	{
		n++;
	}
	while (n--)
	{
		_putchar(s[n] + 0);
	}
	_putchar('\n');
}
