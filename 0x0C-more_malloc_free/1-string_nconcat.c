#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This function concatenates two strings
 *
 * @s1: Pointer to the first string
 *
 * @s2: Pointer to the second string
 *
 * @n: number of bytes pointer s2 to concatenate to pointer s1
 *
 * Return: a pointer to the allocated space in memory containing s1, the first
 * number n bytes of s2 and should be terminated with a null character.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x = 0, y = 0;
	unsigned int m = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x += 1;
	p = malloc(x + m + 1);
	if (p == NULL)
		return (NULL);
	while (s1[y])
	{
		p[y] = s1[y];
		y += 1;
	}
	while (m < n)
	{
		p[x + m] = s2[m];
		m += 1;
	}
	p[y + m] = '\0';

	return (p);
}
