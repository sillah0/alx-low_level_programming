#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of arguments in command line
 * @argv: array of numbers in comand line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}


	for (i = 0; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
