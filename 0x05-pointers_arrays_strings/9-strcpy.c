#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by
 * src, including the terminating null byte (\0)
 * @dest: where values are to be copied
 * @src: source containing files to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *buffer = dest;
	int i;

	for (i = 0; src[i] != '\0'; i++)
		buffer[i] = src[i];
	buffer[i] = '\0';
	return (buffer);
}
