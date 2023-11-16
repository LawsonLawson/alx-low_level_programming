#include "lists.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: parameter or argument
 *
 * Return: length of a string
 */
unsigned int _strlen(const char *s)
{
	unsigned int counts = 0;

	while (*s != '\0')
	{
		s++;
		counts++;
	}

	return (counts);
}
