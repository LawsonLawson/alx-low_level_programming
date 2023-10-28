#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This program adds positive numbers
 *
 * @argv: argument count
 *
 * @argc: argument vector
 *
 * Return: 0 (success) or 1 otherwise
 */
int main(int argc, char *argv[])
{
	/*declaring variables total(t), number(num) and counter(c)*/
	int t = 0, num, c;

	for (num = 1; num < argc; num++)
	{
		for (c = 0; argv[num][c] != '\0'; c++)
		{
			if (!isdigit(argv[num][c]))
			{
				printf("Error\n");

				return (1);
			}
		}
		t = t + atoi(argv[num]);
	}
	printf("%d\n", t);

	return (0);
}
