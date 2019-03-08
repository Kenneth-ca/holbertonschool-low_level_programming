#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two numbers
 * @argc: argument for the function
 * @argv: argument for the function
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
int mult = 0;

if (argc == 3)
{
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
}
else
{
	printf("Error\n");
	exit(98);
}
return (0);
}
