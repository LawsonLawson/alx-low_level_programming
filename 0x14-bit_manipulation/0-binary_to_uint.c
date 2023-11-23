#include "main.h"

/**
 * check_string - checks if a string is valid (has only 0's and 1's)
 *
 * @b: pointer to the string to be checked
 *
 * Return: 1 if string is valid else 0
 */
int check_string(const char *b)
{
	/* Check if the input string is NULL */
	if (b == NULL)
	{
		return (0);
	}
	/* Iterate through the string to check if it is valid */
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		b++;
	}
	/* If the function reaches this point, the string is valid */
	return (1);
}

/**
 * binary_to_uint - coverts a binary to an unsinged int
 *
 * @b: the pointer to the number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int string = 0, base = 1;

	/* Check if the input string is a valid string */
	if (!check_string(b))
	{
		return (0);
	}
	/* Calculate the length of the string */
	while (b[string] != '\0')
	{
		string++;
	}
	/* Convert binary to decimal */
	while (string)
	{
		/* Calculate the product of binary digit to the power 2 */
		num += ((b[string - 1] - '0') * base);
		base *= 2;
		string--;
	}

	return (num);
}
