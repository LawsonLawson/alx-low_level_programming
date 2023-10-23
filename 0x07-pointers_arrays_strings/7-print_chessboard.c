#include "main.h"

/**
 * print_chessboard - This function prints a chessboard to stdout!
 * @a: our pointer to the pieces to print
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int count_1, count_2;

	for (count_1 = 0; count_1 < 8; count_1++)
	{
		count_2 = 0;
		do {
			_putchar(a[count_1][count_2]);
			count_2++;
		} while (count_2 < 8);
		_putchar('\n');
	}
}
