#include "main.h"
#include <stdio.h>

/**
 * puts_half - This function when called prints half a string followed by a new
 * line.
 * @str: The string we intend to work with in this case
 *
 * Return: 0 (success)
 */
void puts_half(char *str)
{
	int m, n;
	int array = 0;

	for (m = 0; str[m] != '\0'; m++)
	{
		array = array + 1;
	}
	n = (array / 2);
	if ((array % 2) == 1)
	{
		n = ((array + 1) / 2);
	}
	for (m = n; str[m] != '\0'; m++)
	{
		putchar(str[m]);
	}
	putchar('\n');
}
