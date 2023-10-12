#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: This program prints the numbers 1 - 100 whiles printing:
 * Fizz for multiples of 3, Buzz for multiples of 5, and
 * FizzBuzz for multiples of both multiples of 3 and 5
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (m % 3 == 0)
		{
			printf("Fizz");
		}
		else if (m % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", m);
		}
		if (m < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
