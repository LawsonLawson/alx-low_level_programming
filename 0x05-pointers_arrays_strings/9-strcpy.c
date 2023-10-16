#include "main.h"

/**
 * _strcpy - This function when called copies a string pointed to a string
 * @dest: This is the destined value
 * @src: This is the source of the value
 *
 * Return: The pointer value to dest
 */
char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	dest[m = m + 1] = '\0';

	return (dest);
}
