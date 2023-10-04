#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments in command line
 * @argv: array of comand line contents
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mult = num1 * num2;

	printf("%d\n", mult);
	return (0);
}
