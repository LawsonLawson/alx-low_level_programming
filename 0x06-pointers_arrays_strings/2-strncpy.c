#include "main.h"

/**
 * _strncpy - This function copies one string to another string
 * @dest: Our first string as well as our destination to copy to
 * @src: The second string we are copying
 * @n: The number of chacters in bytes to copy from
 *
 * Return: The output copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	for (m = 0; m < n && src[m] != '\0'; m++)

		dest[m] = src[m];

	for ( ; m < n; m++)

		dest[m] = '\0';

	return (dest);
}
