#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - This function reallocates a memory block using malloc and free
 * funtions
 *
 * @ptr: a pointer to the memory of the previously allocted space
 *
 * @old_size: integer size in bytes of the allocated space of ptr
 *
 * @new_size: ineger size in bytes of the now to be allocated memory
 *
 * Return: a pointer to the allocated space in memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int n = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size < old_size)
	{
		old_size = new_size;
	}
	do {
		*((char *) p + n) = *((char *) ptr + n);
		n += 1;
	} while (n < old_size);

	free(ptr);

	return (p);
}
