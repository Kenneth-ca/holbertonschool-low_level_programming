#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "holberton.h"

/**
 * cp - copy from a file to another.
 * @origin: origin filename
 * @destiny: destiny filename
 *
 * Return: Always 0.
 */
void cp(const char *origin, char *destiny)
{
	int fd_o, fd_d, rd, wr, cl;
	char buffer[1024];

	fd_o = open(origin, O_RDONLY);
	if (fd_o == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		origin),
		exit(98);
	fd_d = open(destiny, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_o == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
		destiny),
		exit(98);
	rd = read(fd_o, buffer, 1024);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		origin),
		exit(98);
	while (rd != 0)
	{
		wr = write(fd_d, buffer, rd);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			destiny),
			exit(99);
		rd = read(fd_o, buffer, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			origin),
			exit(98);
	}
	cl = close(fd_o);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_o),
		exit(100);
	cl = close(fd_d);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_d),
		exit(100);
}
/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments
 * @argv: the argument
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		argv[1]);
		exit(98);
	}
	cp(argv[1], argv[2]);
	return (0);
}
