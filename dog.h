#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - struct to store information about a dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Define new type struct dog to store information
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} DOG;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif