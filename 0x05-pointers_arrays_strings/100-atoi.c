#include "main.h"

/**
 * _atoi - This function converts a string to an interger
 * @s: In this case , the string to be converted
 *
 * Return: The integer value of the string converted
 */
int _atoi(char *s)
{
	int n = 0;
	unsigned int num = 0;
	int small = 1;
	int digit = 0;

	while (s[n])
	{
		if (s[n] == 45)
		{
			small = small * (-1);
		}
		while ((s[n] >= 48) && (s[n] <= 57))
		{
			digit = 1;
			num = (num * 10) + (s[n] - '0');
			n++;
		}
		if (digit == 1)
		{
			break;
		}
		n++;
	}
	num = num * small;

	return (num);
}
