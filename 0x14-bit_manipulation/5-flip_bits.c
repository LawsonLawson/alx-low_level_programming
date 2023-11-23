#include "main.h"

/**
 * flip_bits - gets the number of bits to flip to be albe to get from n to m
 *
 * @n: the initial number
 *
 * @m: the next or final number
 *
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Initialize a counter called x for the flipped bits */
	int x = 0;
	/* XOR the two numbers n and m to find the differing bits */
	unsigned long int flip = n ^ m;

	/* Iterate through each bit of the XOR outcome */
	while (flip)
	{
		/* Check if the rightmost bit is 1 */
		if (flip & 1)
		{
			x++;/* Increment the count if the "if" is satisfied */
		}
		/* Right shift the XOR outcome to move to the next bit */
		flip >>= 1;
	}

	/* Return the total count of the flipped bits */
	return (x);
}
