#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of command line arguments.
 * @argv: array containing the program command line arguments.
 *
 * Return: Return 1, 2, 0 depending each case.
 */
int main(int argc, char *argv[])
{
int number = 0;

if (argc != 2)
{
	printf("Error\n");
	exit(1);
}
number = atoi(argv[1]);
if (number < 0)
{
	printf("Error\n");
	exit(2);
}
return (0);
}
