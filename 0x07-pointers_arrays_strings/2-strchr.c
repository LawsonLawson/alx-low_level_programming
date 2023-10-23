#include "main.h"
#include <stddef.h>
/**
 * _strchr - This function locates a character in a given string
 * @c: fisrt occurrence of the character
 * @s: the string
 *
 * Return: @s or NULL
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	} while (*s);
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
