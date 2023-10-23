#include "main.h"

/**
 * _memset - This function fills memory with a constant byte.
 * @s: the pointer
 * @b: the constant byte
 * @n: bytes of the memory area pointed @s
 *
 * Return: a pointer to memory @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b; }

	return (s);
}
