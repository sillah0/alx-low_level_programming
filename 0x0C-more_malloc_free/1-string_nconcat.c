#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer 1
 * @s2: pointer 2
 * @n: unsigned int
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len = n;
	char *str_cat;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i]; i++)
		len++;
	str_cat = malloc(sizeof(char) * (len + 1));

	if (str_cat == NULL)
		return (NULL);
	len = 0;

	for (i = 0; s1[i] && i < n; i++)
		str_cat[len++] = s2[i];
	str_cat[len] = '\0';

	return (str_cat);
}

