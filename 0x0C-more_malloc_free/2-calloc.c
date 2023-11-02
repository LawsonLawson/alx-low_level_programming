#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - This funtion allocates memory to an array and sets the elements to
 * zero
 * @nmemb: number of elements in allocated array
 * @size: size of each element of allocated array in byyes
 *
 * Return: a pointer to the memory of array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int n = 0;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	do {
		*(p + n) = 0;
		n += 1;
	} while ((nmemb * size) > n);

	return (p);
}
