#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the first occurrence of @value in @array, or -1 if not
 * found.
 *
 * Description: This function performs a binary search through the given sorted
 * array @array to find the specified value @value. Prints the subarray being
 * searched after each change. The search algorithm divides the array in half a
 * each step, eliminating the half in which the value cannot be present until
 * the value is found or the search range is exhausted.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	/* Check if array is NULL */
	if (array == NULL)
	{
		return (-1);
	}
	/* Perform the binary search */
	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[right]);
		/* Compute the midpoint */
		mid = left + (right - left) / 2;
		/* Check if value is found at the midpoint */
		if (array[mid] == value)
		{
			return (mid);
		}
		/* If the value is in the left half, adjust the right bound */
		if (array[mid] > value)
		{
			right = mid - 1;
		}
		/* If value is in the right half, adjust left bound */
		else
		{
			left = mid + 1;
		}
	}
	/* Should the value not be found, return -1 */
	return (-1);
}
