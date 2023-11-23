#include "main.h"

/**
 * clear_bit - sets a bit at a given position 0
 *
 * @n: pointer to the number to be modified
 *
 * @index: position to be cleared
 *
 * Return: 1 on success , -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the pointer is NULL or if the index is out of bounds */
	if (n == NULL || (index >= (sizeof(unsigned long int) * 8) - 1))
	{
		/* Return -1 to indicate a failure */
		return (-1);
	}
	/**
	 * Use the bitwise AND with the complement of a bit mask to clear
	 * the bit at the specified index
	 */
	*n &= ~(1UL << index);

	/* Return 1 to indicate success */
	return (1);
}
