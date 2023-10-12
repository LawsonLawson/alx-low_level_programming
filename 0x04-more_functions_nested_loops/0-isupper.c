#include "main.h"

/**
 * _isupper - This function checks werther a character is uppercase
 * @c: The character we are to check
 *
 * Return: 1 (Success) or 1 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
