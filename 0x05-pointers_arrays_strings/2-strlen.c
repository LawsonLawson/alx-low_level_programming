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
	int array_lenght = 0;


	if (s != NULL)
	{
		do {
			array_lenght++;
			s++;
		} while (*s != '\0');
	}

	return (array_lenght);
}
