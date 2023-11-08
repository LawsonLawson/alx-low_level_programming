#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

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
	/*declaring i for index and a counter*/
	int i;
	int j;

	if (size <= 0)
	{
		return (-1);
	}
	else if (!cmp || !cmp)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		{
			if (j != 0)
			{
				break;
			}
		}
	}
	if (j == 0)
	{
		return (-1);
	}

	return (i);
}

