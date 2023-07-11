#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: - argument content
 * @argv: - arrays argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	return (0);
}

