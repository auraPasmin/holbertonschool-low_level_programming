#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - this function init a dog.
 * @d: struct of dog
 * Return: a void function no return.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
