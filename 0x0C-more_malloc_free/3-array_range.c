#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - This function creates an array of integers
 *
 * @min: integer for the minimum value of the range
 *
 * @max: integer for the maximum value of the range
 *
 * Return: a pointer to the newly created array of integers
 */
int *array_range(int min, int max)
{
	int *p;
	int size, n = 0;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
	{
		return (NULL);
	}
	do {
		p[n] = min + n;
		n += 1;
	} while (n < size);

	return (p);
}
