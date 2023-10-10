#include "main.h"

/**
 * main - prints "_putchar" to the console
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *string = "_putchar\n";
	int n = 0;

	while (string[n] != '\0')
	{
		putchar(string[n]);
		n++;
	}

	return (0);
}
