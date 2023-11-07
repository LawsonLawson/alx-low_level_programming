#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - This is a data structure that contains info about a dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: whenever this structure name dog is called, we can access info
 * about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Generating an alias for struct dog which was defined earlier
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
