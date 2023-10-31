#include "main.h"
#include <stdlib.h>

/**
 * argstostr - This function concatenates all the arguments of a given program
 *
 * @ac: Argument count
 *
 * @av: Argument vector
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int length = 0, x = 0;
	int m, n;
	char *p;

	if (av == NULL || ac == 0)
	{
		return (NULL);
	}
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		{
			length++;
		}
	}
	length += ac;
	p = malloc(length + 1 * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		{
			p[x] = av[m][n];
			x++;
		}
		if (p[x] == '\0')
		{
			p[x++] = '\n';
		}
	}
	return (p);
}
