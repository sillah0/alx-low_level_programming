#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function to concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t i = strlen(s1);
	size_t j = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(i + j + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, s1);
	strcpy(ptr + 1, s2);

	return (ptr);
}




