#include <unistd.h>

/**
 * _putchar - prints characters passed into it unto the screen
 * @c: Characters this function prints
 *
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
