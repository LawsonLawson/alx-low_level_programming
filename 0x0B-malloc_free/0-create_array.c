#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function creates an array of characters and initializes
 * it with a specific char
 *
 * @size: the size of the array
 *
 * @c: the charcter we would assign
 *
 * Return: the pointer to the first character of the array
 */
char *create_array(unsigned int size, char c)
{
	/*declaring a char pointer and a counter*/
	char *p;
	unsigned int n;

	/*memory allocation with malloc*/
	p = malloc(sizeof(char) * size);

	/*checking if memory allocation was a success*/
	if (p == NULL || size == 0)
	{
		return (NULL);
	}

	/*assigned the characters*/
	n = 0;
	while (n < size)
	{
		p[n] = c;
		n++;
	}

	return (p);
}
