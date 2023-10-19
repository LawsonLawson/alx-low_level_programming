#include "main.h"

/**
 * cap_string - This function capitalizes all the words in a given string
 * @s: The string or argument
 *
 * Return: The capitalized string
 */
char *cap_string(char *s)
{
	int m = 0;
	int n;
	char string[] = " \t\n,;.!?\"(){}";

	do {
		if (*(s + m) >= 'a' && *(s + m) <= 'z')
		{
			if (m == 0)
			{
				*(s + m) -= 'a' - 'A';
			}
			else
			{
				for (n = 0; n <= 12; n++)
				{
					if (string[n] == *(s + m - 1))
					{
						*(s + m) -= 'a' - 'A';
					}
				}
			}
		}
		m++;
	} while (*(s + m));

	return (s);
}
