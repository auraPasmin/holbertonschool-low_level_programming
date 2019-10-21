#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - this function init a dog.
 * @d: struct of dog
 * @name: name of the dog is take a pointer
 * @age: the age of the dog is take a char
 * @owner: the owner of the dog is take a pointer
 * Return: a void function no return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
