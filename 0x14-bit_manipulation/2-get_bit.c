#include "main.h"

/**
 * get_bit - gets and returns the value of a bit at the given index
 *
 * @n: number
 *
 * @index: index starting from 0 of the bit required
 *
 * Return: the converted value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	/* Check if the index is greater than the max bit position */
	if (index > 63)
	{
		return (-1);
	}
	/**
	 * Right shift the number n by the index, effectively moving the bit of
	 * to the rightmost position. Then, perform a bitwise AND with 1 to
	 * extract the value of the bit at the specified index.
	 */
	bit_value = (n >> index) & 1;

	/* return the extracted bit value */
	return (bit_value);
}
