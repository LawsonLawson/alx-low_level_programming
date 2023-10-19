#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of integers
 * @a: array to be reversed
 * @n: integer of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int left, right;

	for (left = 0; (left < (n - 1) / 2); left++)
	{
		right = a[left];
		a[left] = a[n - 1 - left];
		a[n - 1 - left] = right;
	}
}
