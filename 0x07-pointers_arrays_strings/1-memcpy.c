#include "main.h"

/**
 * _memcpy - This function copies a memory area
 * @dest: destination
 * @src: source
 * @n: bytes to copy
 *
 * Return: the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	do {
		dest[x] = src[x];
		x++;
	} while (x < n);

	return (dest);
}
