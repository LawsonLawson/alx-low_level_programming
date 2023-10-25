#include "main.h"

/**
 * _print_rev_recursion - This function prints a string in reverse
 *
 * @s: The pointer to the first character of the array of string to be printed
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\0');
	}
}
