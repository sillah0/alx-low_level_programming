#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - a function to read a text file and print it
 * @filename: name of the file
 * @letters:number of letters to read and print
 *
 * Return: actual number of letters it could read and print
 * if file is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buff, letters);
	close(fd);

	if (rd == -1)
	{
		return (0);
	}
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1 || wr != rd)
	{
		return (0);
	}
	free(buff);
	return (wr);
}

