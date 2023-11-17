#include "main.h"

/**
 * error_exit - function to print an error and exit
 * @code: integer
 * @format: string
 * @arg: argument to be formatted
*/
void error_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * copy_file - function to copy contents of a file
 * @source_fd: parameter for source file
 * @dest_fd: parameter for destination file
*/
void copy_file(int source_fd, int dest_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytesread, byteswritten;

	while ((bytesread = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		byteswritten = write(dest_fd, buffer, bytesread);
		if (byteswritten != bytesread)
		{
			error_exit(99, "error: can't write to file\n", NULL);
		}
	}
	if (bytesread == -1)
	{
		error_exit(98, "error: can't read from file\n", NULL);
	}
}
/**
 * main - program entry point
 * @argc: parameter representing argument content
 * @argv:array of string representing arguments passed
 *
 * Return: integer
*/
int main(int argc, char *argv[])
{
	int source_fd;
	int dest_fd;

	if (argc != 3)
	{
		error_exit(97, "usage: %s file_from file_to\n", argv[0]);
	}
	source_fd = open(argv[1], O_RDONLY, 0);
	if (source_fd == -1)
	{
		error_exit(98, "error: can't read from the file %s\n", argv[1]);
	}
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (dest_fd == -1)
	{
		error_exit(99, "Error: can't write to file %s\n", argv[2]);
	}

	copy_file(source_fd, dest_fd);

	if (close(source_fd) == -1)
	{
		error_exit(100, "Error: Can't close fd \n", NULL);
	}
	if (close(dest_fd) == -1)
	{
		error_exit(100, "Error: Can't close fd \n", NULL);
	}
	return (0);
}

