#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: the file to read
 * @letters: the number of letter to be printed
 *
 * Return: amount of printed, 0 if fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, p_letters;
	char *s;

	if (filename == NULL)
		return (0);
	s = malloc(letters + 1);
	if (s == NULL)
	{
		free(s);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	p_letters = read(fd, s, letters);
	write(STDOUT_FILENO, s, p_letters);
	return (p_letters);
}
