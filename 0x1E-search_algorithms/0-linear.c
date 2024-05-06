#include "search_algos.h"

/**
 * linear_search - Searches for a value in an integer array using linear
 * search.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the first occurrence of @value in @array, or -1 if not
 * found.
 *
 * Description: This function performs a linear search through the given array
 * @array to find the specified value @value. It iterates through each element
 * of the array, printing the index and value of each element being checked. If
 * the value is found, the function returns the index of its first occurrenc in
 * the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
	{
		return (-1);
	}

	/* Iterate through the array */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* Check if the current element matches the target value */
		if (array[i] == value)
		{
			return (i); /* Return it .. thus the index if found */
		}
	}

	/* Should the value not be found, return -1 */
	return (-1);
}
