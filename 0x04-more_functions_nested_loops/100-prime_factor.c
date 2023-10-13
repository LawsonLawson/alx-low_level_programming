#include <stdio.h>
#include <stdbool.h>


/**
 * main - This function prints the largest prime factor
 * of a given number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long number = 612852475143;
	long largestPF = 0;
	long odd;

	while (number % 2 == 0)
	{
		largestPF = 2;
		number = number / 2;
	}
	for (odd = 3; odd * odd <= number; odd = odd + 2)
	{
		while (number % odd == 0)
		{
			largestPF = odd;
			number = number / odd;
		}
	}
	if (number > 1)
	{
		largestPF = number;
	}
	printf("%li\n", largestPF);

	return (0);
}
