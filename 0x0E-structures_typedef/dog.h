#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This defines the structure of  the dog
 * @name: The name of the dog
 * @age: The age oft he dog
 * @owner: The owner of the dog
 *
 * Description: My first struct task
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
