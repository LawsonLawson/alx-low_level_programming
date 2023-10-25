#include "main.h"

/**
 * test_for_root - This function checks to see if the product of two
 * natural numbers is the root of a given number n
 * @x: first operand
 * @y: second operand
 *
 * Return: The square root
 */
int test_for_root(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if ((x * x) > y)
	{
		return (-1);
	}
	return (test_for_root((x + 1), y));
}


/**
 * _sqrt_recursion - This function returns the square root of a number n
 *
 * @n: The number we are working with
 *
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (test_for_root(1, n));
	}
}
