#include "3-calc.h"
#include <string.h>
#include <stddef.h>

/**
 * get_op_func - This function determines what operator is to be used
 * @s: The parameter to help the function determine what operator to use
 * Return: A function with a decided operator , and NULL if fail
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
