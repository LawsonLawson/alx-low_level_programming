#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - This funtion searches a string for any of as set of bytes
 * @s: string we are to search
 * @accept: The set of bytes we are searching for.
 *
 * Return: If the set is matched, we return a pointer to the mached byte.
 * Else set is not matched so we return NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int counter;

	do {
		for (counter = 0; accept[counter]; counter++)
		{
			if (*s == accept[counter])
			{
				return (s);
			}
		}
		s++;
	} while (*s);

	return (NULL);
}
