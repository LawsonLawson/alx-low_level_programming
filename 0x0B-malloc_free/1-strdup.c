#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly created space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: the pointer to character
 *
 * Return: a pointer to a newly created space in memory
 */
char *_strdup(char *str)
{
	/*initializing a pointer to character and two counters*/
	char *p;
	int m, n;

	/*checking if allocation was a success*/
	if (str == NULL)
	{
		return (NULL);
	}
	/*incrementing from 0 so long as we have not hit the null char*/
	m = 0;
	do {
		m++;
	} while (str[m] != '\0');
	/*allocating memory with malloc*/
	p = malloc((m + 1) * sizeof(char));
	/**checking*/
	if (p == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
		p[n] = str[n];
	}
	return (p);
}
