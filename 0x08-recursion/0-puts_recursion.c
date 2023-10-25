#include "main.h"

/**
 * _puts_recursion - This function prints a string followed by a new line
 *
 * @s: The pointer to the first address of characters in the array to print
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
