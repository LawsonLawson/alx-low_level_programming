#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints the nth element of a given array
 * @a: The interger argument of array to print
 * @n: The number of elements this function would print
 *
 * Return: 0 (sucess)
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m < n - 1)
		{
			printf("%d ", a[m]);
		}
		else
		{
			printf("%d", a[m]);
		}
	}
	printf("\n");
}
