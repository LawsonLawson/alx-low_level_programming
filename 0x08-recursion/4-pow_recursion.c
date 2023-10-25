#include "main.h"

/**
 * _pow_recursion - This function calculates the exponent of a given number by
 * a given value
 * @x: Our base value
 * @y: The exponent
 *
 * Return: the result after the operation
 */
int _pow_recursion(int x, int y)
{
	int result;


	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		result = x * _pow_recursion(x, (y - 1));
		return (result);
	}
}
