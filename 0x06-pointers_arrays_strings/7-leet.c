#include "main.h"

/**
 * leet - This function encodes a string into 1337
 * @s: The given string we are to encode
 *
 * Return: s
 */
char *leet(char *s)
{
	int m, n;
	char one[] = "aAeEoOtTlL";
	char two[] = "4433007711";


	for (m = 0; s[m]; m++)
	{
		for (n = 0; one[n]; n++)
		{
			if (s[m] == one[n])
			{
				s[m] = two[n];
				break;
			}
		}
	}

	return (s);
}
