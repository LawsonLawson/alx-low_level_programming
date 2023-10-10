#include <stdio.h>

/**
 * print_to_98 - Prints a group of natural numbers from intput to 98 separated
 * by a comma followed by a space
 * @n: In this case is the number we begin our counting at
 */
void print_to_98(int n)
{
	if (n >= 'b')
	{
		while (n > 'b')
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 'b')
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
