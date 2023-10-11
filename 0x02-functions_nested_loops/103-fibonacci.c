#include <stdio.h>
#include <stdbool.h>


/**
 * main - This program finds a prints the sum of the evenly-valued terms of
 * Fibonacci numbers not exceeding 4,000,000
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long fibonacci_1 = 0;
	long fibonacci_2 = 1;
	long sum_of_fibonacci;
	float total_sum;

	while (true)
	{
		sum_of_fibonacci = fibonacci_1 + fibonacci_2;
		if (sum_of_fibonacci > 4000000)
			break;
		if ((sum_of_fibonacci % 2) == 0)
			total_sum += sum_of_fibonacci;

		fibonacci_1 = fibonacci_2;
		fibonacci_2 = sum_of_fibonacci;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
