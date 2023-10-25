#include "main.h"

/**
 * _strlen_recursion - This funtion calculates the lenght of a string
 * recursively
 *
 * @s: The pointer to the first address of the string whoose lenght is to
 * be calculated.
 *
 * Return: The lenght of the string
 */
int _strlen_recursion(char *s)
{
	int value;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		value = 1 + _strlen_recursion(s + 1);
		return (value);
	}
}
