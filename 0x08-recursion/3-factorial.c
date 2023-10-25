#include "main.h"

/**
 * factorial - This function returns the factorial of a given number
 *
 * @n: The given number of whoose factorial we would return
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	int result;
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		result = n * factorial(n - 1);
		return (result);
	}
}
