#include "dog.h"
#include <stdio.h>

/**
 * print_dog - This function prints the info of a dog using the data structure
 *
 * @d: This is the pointer to the address of the variable name
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
