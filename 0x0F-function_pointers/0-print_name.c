#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to use
 *
 * Return:nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);

}
