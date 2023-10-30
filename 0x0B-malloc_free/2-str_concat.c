#include "main.h"
#include <stdlib.h>

/**
 * str_concat - This function returns the ends of inputs and adds them
 * to get the size
 *
 * @s1: first input
 * @s2: second input
 *
 * Return: input 1 and 2 put together
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int m, n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	m = n = 0;
	do {
		m++;
	} while (s1[m] != '\0');
	do {
		n++;
	} while (s2[n] != '\0');
	cat = malloc((m + n + 1) * sizeof(char));
	if (cat == NULL)
		return (NULL);
	m = n = 0;
	do {
		cat[m] = s1[m];
		m++;
	} while (s1[m] != '\0');
	do {
		cat[m] = s2[n];
		m++;
		n++;
	} while (s2[n] != '\0');
	cat[m] = '\0';

	return (cat);
}
