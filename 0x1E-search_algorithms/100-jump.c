#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the first occurrence of @value in @array, or -1 if not
 * found.
 *
 * Description: This function implements the jump search algorithm to find the
 * @value in the sorted array @array. It prints the value being checked every
 * time it is compared in the array. The algorithm uses the square root of the
 * array size as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t current_index, jump_step, prev_index;

	if (array == NULL || size == 0)
		return (-1);

	jump_step = sqrt(size);

	/* Perform jump search */
	for (current_index = prev_index = 0; current_index < size &&
			array[current_index] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", current_index,
				array[current_index]);
		prev_index = current_index;
		current_index += jump_step;
	}

	/* Print the range where the value may exist */
	printf("Value found between indexes [%ld] and [%ld]\n", prev_index,
			current_index);

	/* Adjust jump if it exceeds the array size */
	current_index = current_index < size - 1 ? current_index : size - 1;

	/* Linear search within the identified range */
	for (; prev_index < current_index && array[prev_index] < value;
			prev_index++)
		printf("Value checked array[%ld] = [%d]\n", prev_index, array[prev_index]);
	printf("Value checked array[%ld] = [%d]\n", prev_index, array[prev_index]);

	/* Check if value is found */
	return (array[prev_index] == value ? (int)prev_index : -1);
}
