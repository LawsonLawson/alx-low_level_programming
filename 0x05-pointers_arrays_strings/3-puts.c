#include "main.h"
#include <unistd.h>

/**
 * _puts - This function prints a string followed by a new line to stdout
 * @str: argurment whose string of characters are to be printed
 *
 * Return: 0 (success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
