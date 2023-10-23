#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - This function prints the sum of tow diagonals of a square
 * matrix
 * @a: the pointer to the location to start the matrix
 * @size: width of the matrix
 *
 * Return: Nothing!
 */
void print_diagsums(int *a, int size)
{
	int count, num, sum_1, sum_2;


	sum_1 = 0;
	sum_2 = 0;
	count = 0;

	do {
		sum_1 = sum_1 + a[count];
		count = count + size + 1;
	} while (count <= (size * size));
	for (num = size - 1; num <= (size * size) - size; num = num + size - 1)
	{
		sum_2 = sum_2 + a[num];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
