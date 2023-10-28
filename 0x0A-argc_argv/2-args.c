#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints all the argument it receives
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	/*setting my counter to i*/
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
