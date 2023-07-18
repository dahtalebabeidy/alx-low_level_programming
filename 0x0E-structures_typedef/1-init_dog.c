#include "main.h"

/**
* init_dog - initialize a dog
*
* @d: parametre
* @name: parametre
* @age: parametre
* @owner: parametre
*
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
