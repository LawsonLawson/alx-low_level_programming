#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints the number of arguments passed into it
 *
 * @argc: The argument count
 *
 * @argv: The argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);


	return (0);
}
