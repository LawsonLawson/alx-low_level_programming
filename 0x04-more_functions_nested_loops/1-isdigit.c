#include "main.h"

/**
 * _isdigit - This function checks for a digit 0 through 9
 * @c: In this case, what we are checking
 *
 * Return: 1 (Success) or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
