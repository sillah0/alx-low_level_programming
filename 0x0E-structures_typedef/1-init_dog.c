#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function name
 * @d: ptr to struct dog
 * @name:ptr to chars of the dog name
 * @age - age of the dog
 * @owner: ptr to char owner of the dog
 * Return: NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
