#include "main.h"

/**
 * puts2 - This function prints every other character of a string starting with
 * the first character
 * @str: The string character we intend to print
 *
 * Return: 0 (success)
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
