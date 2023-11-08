#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is to check the operations written ealier
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	/*declaring a pointer to a function op*/
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", op(a, b));

	return (0);
}
