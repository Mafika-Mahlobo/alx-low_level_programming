#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog -  initializes struct dog
* @d: poiter to struct
* @name: dog name (struct attibute)
* @age: dog age
* @owner: dog owner
* Return: No return value
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
