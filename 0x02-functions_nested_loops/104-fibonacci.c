#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, beginning with
 *        1 and 2, followed by a space separated by a comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counts;
	unsigned long Fib1 = 0, Fib2 = 1, total;
	unsigned long Fib1_half1, Fib1_half2, Fib2_half1, Fib2_half2;
	unsigned long Half1, Half2;

	for (counts = 0; counts < 92; counts++)
	{
		total = Fib1 + Fib2;
		printf("%lu, ", total);

		Fib1 = Fib2;
		Fib2 = total;
	}

	Fib1_half1 = Fib1 / 10000000000;
	Fib2_half1 = Fib2 / 10000000000;
	Fib1_half2 = Fib1 % 10000000000;
	Fib2_half2 = Fib2 % 10000000000;

	for (counts = 93; counts < 99; counts++)
	{
		Half1 = Fib1_half1 + Fib2_half1;
		Half2 = Fib1_half2 + Fib2_half2;
		if (Fib1_half2 + Fib2_half2 > 9999999999)
		{
			Half1 += 1;
			Half2 %= 10000000000;
		}

		printf("%lu%lu", Half1, Half2);
		if (counts != 98)
			printf(", ");

		Fib1_half1 = Fib2_half1;
		Fib1_half2 = Fib2_half2;
		Fib2_half1 = Half1;
		Fib2_half2 = Half2;
	}
	printf("\n");
	return (0);
}
