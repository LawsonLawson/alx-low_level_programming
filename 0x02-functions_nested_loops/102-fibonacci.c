#include <stdio.h>


/**
 * main - This program prints the first 50 Fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int counts;
	long fibonacci_1 = 0;
	long fibonacci_2 = 1;
	long output;


	/*intializing counts to 50*/
	for (counts = 0; counts <= 49; counts++)
	{
		output = fibonacci_1 + fibonacci_2;
		printf("%li", output);

		fibonacci_1 = fibonacci_2;
		fibonacci_2 = output;

		if (counts == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
