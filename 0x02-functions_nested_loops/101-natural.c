#include <stdio.h>


/**
 * main - This program prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int integer;
	int result = 0;


	for (integer = 0; integer <= 1023; integer++)
	{
		if ((integer % 3 == 0) || (integer % 5) == 0)
			result += integer;
	}
	printf("%d\n", result);

	return (0);
}
