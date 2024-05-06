#include "search_algos.h"

/**
 * binary_search_range - Searches for a value in a sorted array using binary
 * search.
 * @array: Pointer to the first element of the array.
 * @left_index: The starting index of the subarray to search.
 * @right_index: The ending index of the subarray to search.
 * @target_value: Value to search for.
 *
 * Return: The index of the first occurrence of @target_value in @array, or
 * -1 if not found.
 *
 * Description: This function implements binary search to find the
 * @target_value in the sorted array @array within the specified
 * range from index @left_index to index @right_index. It prints
 * the subarray being searched after each change.
 */
int binary_search_range(int *array, size_t left_index, size_t right_index,
		int target_value)
{
	size_t mid_index, i;

	if (array == NULL)
		return (-1);

	while (right_index >= left_index)
	{
		printf("Searching in subarray: ");
		for (i = left_index; i < right_index; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right_index]);

		mid_index = left_index + (right_index - left_index) / 2;

		/* If target_value is found at midpoint */
		if (array[mid_index] == target_value)
			return (mid_index);

		/* If target_value is in left half, adjust right bound */
		if (array[mid_index] > target_value)
			right_index = mid_index - 1;
		/* If target_value is in right half, adjust left bound */
		else
			left_index = mid_index + 1;
	}

	/* target_value not found, return -1 */
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 * exponential search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the first occurrence of @target_value in @array, or -1
 * if not found.
 *
 * Description: This function implements exponential search to find the
 * @target_value in the sorted array @array. It prints the value being
 * checked every time it is compared in the array.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1, right_index;

	if (array == NULL)
		return (-1);

	/* Double the index for every iteration */
	while (index < size && array[index] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", index,
				array[index]);
		index *= 2;
	}

	right_index = (index < size) ? index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", index / 2,
			right_index);
	/* Perform binary search within identified range */
	return (binary_search_range(array, index / 2, right_index, value));
}
