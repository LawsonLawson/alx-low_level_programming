#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - This function checks if memory allocated by malloc was
 * successfull
 *
 * @b: memory to allocate in bytes
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	/*initializing a pointer to hold address returned by malloc*/
	void *p;

	p = malloc(sizeof(void *) * b);

	/*checking if memory allocation was a success*/
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
