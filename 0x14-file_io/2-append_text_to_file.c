#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "holberton.h"

/**
 * append_text_to_file - appends new text to a file
 * @filename: the name of the file
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	return (-1);
	if (text_content != NULL)
	write(fd, text_content, strlen(text_content));
	return (1);
}
