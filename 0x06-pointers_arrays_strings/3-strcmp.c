#include "main.h"

/**
 * _strcmp - This function compares two given strings
 *
 * @s1: Pointer that points to the first string
 *
 * @s2: Pointer that points to the second string
 *
 * Return: An integer <= >= zero
 */
int _strcmp(char *s1, char *s2)
{
	do {
		if (*s1 != *s2)
		{
			return ((int)*s1 - (int)*s2);
		}
		s1 += 1;
		s2 += 1;
	} while (*s1 && *s2 && *s1 == *s2);

	return ((int)*s1 - (int)*s2);
}
