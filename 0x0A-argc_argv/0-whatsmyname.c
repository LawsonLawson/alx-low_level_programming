#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints its name followed by a new line
 *
 * @argc: The argument count
 *
 * @argv: The argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
