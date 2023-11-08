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
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	/*declaring a pointer*/
	char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	ptr = argv[2];
	n2 = atoi(argv[3]);
	if (get_op_func(ptr) == NULL || ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*ptr == '%' || *ptr == '/') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(ptr)(n1, n2));

	return (0);
}
