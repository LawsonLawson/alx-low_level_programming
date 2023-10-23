#include "main.h"

/**
 * _strspn - This function gets the length of a prefix stbstring
 * @s: initial segment in bytes
 * @accept: returns in bytes
 *
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int zero, one, two;

	zero = 0;

	for (one = 0; s[one] != '\0'; one++)
	{
		if (s[one] != 32)
		{
			for (two = 0; accept[two] != '\0'; two++)
			{
				if (s[one] == accept[two])
				{
					zero++;
				}
			}
		}
		else
		{
			return (zero);
		}
	}
	return (zero);
}
