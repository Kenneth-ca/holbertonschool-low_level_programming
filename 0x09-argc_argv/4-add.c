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
int i, j;
int sum = 0;
int new = 0;

for (i = 1; i < argc; i++)
{
	new = atoi(argv[i]);
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (argv[i][j] < 48 || argv[i][j] > 57)
		{
			printf("Error\n");
			return (1);
		}
	}
	sum = sum + new;
}
printf("%d\n", sum);
return (0);
}
