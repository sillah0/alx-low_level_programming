#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to dog struct
 * Return: d is NULL print (nil)
 * if d is NULL print nothing
 * if name is NULL print Name: (nil)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
