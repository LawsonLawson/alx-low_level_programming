#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - This function prints the string of characters passed to stdout
 *
 * @name: The pointer to the address of the first character
 * @f: The pointer to the function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		exit(98);
	}
	else
	{
		f(name);
	}
}
