#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Convert coins.
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i = 0;
int div = 0;
int money = 0;
char coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
money = atoi(argv[1]);
	for (i = 0; coins[i] != '\0'; i++)
	{
		if (money % coins[i] == 0)
		{
			div = div + (money / coins[i]);
			printf("%d\n", div);
			return (0);
		}
		else
		{
			if (money >= coins[i])
				div = div + (money / coins[i]);
			money = money % coins[i];
		}
	}
return (0);
}
