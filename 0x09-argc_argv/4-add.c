#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;
int new = 0;

for (i = 1; i < argc; i++)
{
	new = atoi(argv[i]);
	if (new < 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		sum = sum + new;
}
printf("%d\n", sum);
return (0);
}
