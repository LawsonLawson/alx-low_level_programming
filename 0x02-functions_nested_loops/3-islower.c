#include "main.h"

/**
 * _islower - Checks for a lowercase character
 *@c: The character we are working with at a time
 *
 * Return: 1 (Success), 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
