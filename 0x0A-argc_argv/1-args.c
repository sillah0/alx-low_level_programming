#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: - argument content
 * @argv: - array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
