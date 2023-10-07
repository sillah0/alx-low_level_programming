#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: a pointer to string to be duplicated
 * Return: if str is Null print  NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	size_t length = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * (length + 1));

		if (ptr == NULL)
	{
		return (NULL);
	}
		strcpy(ptr, str);
		return (ptr);
}



