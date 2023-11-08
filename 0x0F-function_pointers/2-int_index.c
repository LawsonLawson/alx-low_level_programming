#include "function_pointers.h"

/**
 * int_index - This function searches for an integer
 *
 * @array: The array with elements to be searched
 * @size: the size of the array
 * @cmp: The pointer to the function
 *
 * Return: (-1) if there is no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/*declaring i for index*/
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

