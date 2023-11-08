#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - This function executes a function as a givent parameter
 * on each element of an array
 * @action: the pointer to the function
 * @size: the size of the arrayi
 * @array: the array we are passing as parameter
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*declaring a counter to iterate through the array*/
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		exit(98);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
