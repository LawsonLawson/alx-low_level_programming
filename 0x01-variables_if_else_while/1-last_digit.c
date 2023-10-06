#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the last digit of values in a given variable
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/*for numbers greater than 5*/
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	/*for numbers less than 6*/
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,
		lastDigit);
	}
	/*for numbers that are zero*/
	else
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}

	return (0);
}
