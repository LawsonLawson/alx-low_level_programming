#include "main.h"

/**
 * set_bit - sets a bit at a given position 1
 *
 * @n: pointer to the number to be modified
 *
 * @index: index of the bit to set
 *
 * Return: 1 on success , -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the pointer is NULL or if the index is out of bounds */
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
	{
		/* Return -1 to indicate a failure */
		return (-1);
	}
	/**
	 * Use the bitwise OR to set the bit at a specified index to 1
	 * meanwhile (1 << index) creates a bismask with only the bit at
	 * 'index' set to 1
	 * Using bitwise OR (|) with the original number sets that bit to 1
	 */
	*n |= (1UL << index);

	/* Return 1 to indicate success */
	return (1);
}
