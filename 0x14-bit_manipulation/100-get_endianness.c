#include "main.h"

/**
 * get_endianness - checks wether a machine is little or big endian
 *
 * Return: 1 if little , 0 otherwise
 */
int get_endianness(void)
{
	/* A pointer to character initialized to the adrress an address */
	char *bytes;
	/* A variable n to for inspeciton case initialized to 1 */
	unsigned int n = 1;

	/* Assignment and typecasting n into char*/
	bytes = (char *)&n;

	/* Check the value of the first byte, If it's none-zero,it is little */
	if (*bytes)
	{
		return (1);/* little endian */
	}
	else
	{
		return (0);/* big endian then */
	}
}
