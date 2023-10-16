#include "main.h"

/**
 * rev_string - This function when called reverses a string
 * @s: The to which the program would reverse its string
 *
 * Return: 0 (success)
 */
void rev_string(char *s)
{
	int n = 0, m, reverse;


	while (s[n] != '\0')
	{
		n++;
	}
	for (m = 0; m < n / 2; m++)
	{
		reverse = s[m];
		s[m] = s[n - 1 - m];
		s[n - 1 - m] = reverse;
	}
}
