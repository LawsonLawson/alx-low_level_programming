#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program multiplies two numbers and prints "Error" and returns 1
 * if it does not receive two arguments
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0 (success) or 1 otherwise
 */
int main(int argc, char *argv[])
{
	if ((argc - 1) != 2)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
