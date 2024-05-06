#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 * interpolation search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the first occurrence of @value in @array, or -1 if not
 * found.
 *
 * Description: This function implements the interpolation search algorithm to
 * find the @value in the sorted array @array. It prints the value being
 * checked every time it is compared in the array. The interpolation formula is
 * used to determine the probable position of the @value.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left, right, pos;

	if (array == NULL)
		return (-1);

	/* Perform interpolation search */
	for (left = 0, right = size - 1; right >= left;)
	{
		pos = left + (((double)(right - left) / (array[right] - array[left])) *
				(value - array[left]));

		/* Check if calculated position is within array bounds */
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		/* If value is found at calculated position */
		if (array[pos] == value)
			return (pos);

		/* Adjust search range */
		if (array[pos] > value)
			right = pos - 1;
		else
			left = pos + 1;
	}

	return (-1);
}
