#include <stdio.h>

/**
 * before_main - printing a message before executing the main function
 */
void __attribute__ ((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

