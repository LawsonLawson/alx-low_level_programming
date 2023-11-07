#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - This function creates details for a new dog
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: Owner of new dog
 * Return: NULL if failed and struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int new_name, new_owner, i;
	dog_t *p;

	p = malloc(sizeof(*p));
	if (!(owner) || !(name) || p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (new_name = 0; name[new_name]; new_name++)
	{
		;
	}
	for (new_owner = 0; owner[new_owner]; new_owner++)
	{
		;
	}
	p->name = malloc(new_name + 1);
	p->owner = malloc(new_owner + 1);
	if (!(p->name) || !(p->owner))
	{
		free(p->owner);
		free(p->name);
		free(p);
		return (NULL);
	}
	for (i = 0; i < new_name; i++)
	p->name[i] = name[i];
	p->name[i] = '\0';

	p->age = age;

	for (i = 0; i < new_owner; i++)
	p->owner[i] = owner[i];
	p->owner[i] = '\0';
	return (p);
}
