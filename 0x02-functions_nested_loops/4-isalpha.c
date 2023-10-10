#include "main.h"


/**
 * _isalpha - Checks wether a character is alphabetic
 * @c: The character we are working with
 *
 * Return: 1 if character is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
