#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints the minimum number of coins for change to an
 * amount of money
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0 (success) or 1 otherwise
 */
int main(int argc, char *argv[])
{
	/**declaring variables cv for cent values, c for cents, nc for number of*/
	/* cents, b for balance and i for my counter*/
	int c, nc, b, i;
	int cv[] = {25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");

		return (0);
	}
	nc = 0;
	b = c;
	for (i = 0; i < 5; i++)
	{
		nc = nc + b / cv[i];
		if ((b % cv[i]) == 0)
		{
			break;
		}
		b = b % cv[i];
	}
	printf("%d\n", nc);

	return (0);
}
