#include "main.h"

/**
 * string_toupper - This function changes lowercase characters to uppercase
 * @s: The string
 *
 * Return: The string in uppercase
 */
char *string_toupper(char *s)
{
	int string = 0;

	do {
		if (*(s + string) >= 'a' && *(s + string) <= 'z')
			*(s + string) -= 'a' - 'A';
		string++;
	} while (*(s + string));

	return (s);
}
