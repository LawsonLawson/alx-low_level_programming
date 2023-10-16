#include "main.h"
#include <stdio.h>

/**
 * swap_int - This program swaps value of int paratmeters passed into it
 * @a: First paratmeter
 * @b: Second paratmeter
 *
 * Return: 0 (success);
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
