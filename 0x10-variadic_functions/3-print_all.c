#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - This function prints all the arguments as specified
 *
 * @format: This specifies all the necessary operations
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int x = 0;
	char *string, *separate = "";
	va_list all_list;

	va_start(all_list, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separate, va_arg(all_list, int));
					break;
				case 'i':
					printf("%s%i", separate, va_arg(all_list, int));
					break;
				case 'f':
					printf("%s%f", separate, va_arg(all_list, double));
					break;
				case 's':
					string = va_arg(all_list, char*);
					if (string == NULL)
						string = "(nil)";
					printf("%s%s", separate, string);
					break;
				default:
					x++;
					continue;
		}
		separate = ", ";
		x++;
		}
	}
	printf("\n");
	va_end(all_list);
}
