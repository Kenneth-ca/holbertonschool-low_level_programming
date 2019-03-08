#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @b: argument for the function
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
int mult = 0;

if (argc == 3)
{
	mult = atoi(argc[1]) * atoi(argv[2]);
	printf("%d\n", mult);
}
else
{
	printf("Error\n");
	return (98);
}
return (0);
}
