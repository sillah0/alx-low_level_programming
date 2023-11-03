#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - function to append text to a file
 * @filename: pointer to name of file
 * @text_content:string
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (-1);
}
