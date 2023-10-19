#include "main.h"

/**
 * _strcat - This funtion concatenates two strings
 * @dest: Our string to be concatenated to another string.
 * @src: The string to which we are concatenating the other string
 *
 * Return: pointer to our resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, sLenght = 0;

	while (dest[i++])
		sLenght++;

	for (i = 0; src[i]; i++)
		dest[sLenght++] = src[i];

	return (dest);
}

