#include "main.h"

/**
 * set_string - This function sets the value of a given pointer to a char
 * @s: The pointer
 * @to: The string the pointer changes to
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
