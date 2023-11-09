#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - This function prints all the arguments as specified
 *
 * @format: This specifies all the necessary operations
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int flag, x;
	char *string;
	va_list all_list;

	va_start(all_list, format);
	x = 0;
	while (format[x] != '\0' && format != NULL)
	{
		switch (format[x])
		{
			case 'c':
			printf("%c", va_arg(all_list, int));
			flag = 0;
			break;
			case 'i':
			printf("%i", va_arg(all_list, int));
			flag = 0;
			break;
			case 'f':
			printf("%f", va_arg(all_list, double));
			flag = 0;
			break;
			case 's':
			string = va_arg(all_list, char *);
			if (string == NULL)
			string = "(nil)";
			printf("%s", string);
			flag = 0;
			break;
			default:
			flag = 1;
			break;
		}
		if (flag == 0 && format[x + 1] != '\0')
		printf(", ");
		x++;
	}
	printf("\n");
	va_end(all_list);
}
