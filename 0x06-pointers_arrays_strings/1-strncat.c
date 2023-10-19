#include "main.h"
#include <string.h>

/**
 * _strncat - This function conactenates two given strings
 * @dest: The string we are appendeing another string to
 * @src: The string to be appended
 * @n: Bytes of the string to be appended
 *
 * Return: A pointer of the output string.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
