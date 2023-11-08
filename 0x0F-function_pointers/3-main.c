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
	/*declaring a pointer to a function op*/
	int (*ptr)(int, int), n1, n2, cal;
	char op;

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	op = *argv[2];
	if ((op == '%' || op == '/') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}
	cal = ptr(n1, n2);
	printf("%d\n", cal);

	return (0);
}
