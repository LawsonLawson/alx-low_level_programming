#include "main.h"

/**
 * test_for_prime - This function checks if a given number is prime
 * @x: first operand to run our test case
 * @y: second operand to run out test case
 *
 * Return: a prime number to anyone who calls this function
 */
int test_for_prime(int x, int y)
{
	if (y % x == 0 || y < 2)
	{
		return (0);
	}
	else if (y / 2 < x)
	{
		return (1);
	}
	else
	{
		return (test_for_prime(x + 1, y));
	}
}

/**
 * is_prime_number - This function tells wether a given is prime
 *
 * @n: Our number to be checked
 *
 * Return: a prime number
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (test_for_prime(2, n));
	}
}
