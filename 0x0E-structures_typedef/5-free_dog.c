#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocation
 * @d: pointer to struct dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).name);
		free(d);
	}
}
