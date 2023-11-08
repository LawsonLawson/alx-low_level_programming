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
	while (i < 10)
	{
		if (s[0] == ops->op[i])
		{
			break;
			i++;
		}
	}
	return (ops[i / 2].f);
}
