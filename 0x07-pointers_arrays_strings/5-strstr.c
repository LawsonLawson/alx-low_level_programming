#include "main.h"
#include <stdio.h>

/**
 * _strstr - This function locates a substring
 * @haystack: the longer we are to search
 * @needle: the first occurrence of our substring
 *
 * Return: a pointer to the substring or NULL if it is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int counter_1 = 0;
	unsigned int counter_2 = 0;

	while (haystack[counter_1])
	{
		do {
			if (haystack[counter_1 + counter_2] == needle[counter_2])
			{
				counter_2++;
			}
			else
			{
				break;
			}
		} while (needle[counter_2] && (haystack[counter_1] == needle[0]));
		if (needle[counter_2])
		{
			counter_1++;
			counter_2 = 0;
		}
		else
		{
			return (haystack + counter_1);
		}
	}
	return (NULL);
}
