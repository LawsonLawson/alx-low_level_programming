#include "main.h"
#include <stdio.h>

/**
 * _strlen - This program seeks to prints the lenght of a string
 * @s: The array to print the characters
 *
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (*s != '\0')
	{
		string_length++;
		s++;
	}

	return (string_length);
}
