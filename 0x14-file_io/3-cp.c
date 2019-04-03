#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "holberton.h"

/**
 * cp check the code for Holberton School students.
 *
 * Return: Always 0.
 */
/**void cp(const char *origin, char *destiny)
{
int fd_o, fd_d;
char buffer[1024];

if (origin == NULL)
{
	dprintf(2, "Error: Can't read from file ");
	dprintf(2, "NAME_OF_THE_FILE\n");
	exit (98);
}
fd_o = open(origin, O_RDONLY);
if (fd_o == -1)
	exit(98);
fd_d = open(destiny, O_WRONLY);
if (fd_o == -1)
	exit(98);

}
*/
/**
 * main - check the code for Holberton School students.
 * 
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        dprintf(2, "Usage: cp file_from file_to");
        exit(97);
    }
    /*cp(argv[1], argv[2]);*/
    return (0);
}
