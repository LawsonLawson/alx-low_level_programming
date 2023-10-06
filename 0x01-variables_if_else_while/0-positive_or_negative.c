#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints wether a random number is positive or negative
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*for positive numbers*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/*for negative numbers*/
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	/*for zero*/
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
