#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of command line arguments.
 * @argv: array containing the program command line arguments.
 *
 * Return: Return 0.
 */
int main(int argc, char *argv[])
{
int primero, segundo, resultado;

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
if (argv[2][1])
{
	printf("Error\n");
	exit(99);
}
primero = atoi(argv[1]);
segundo = atoi(argv[3]);
resultado = (*get_op_func(argv[2]))(primero, segundo);
printf("%d\n", resultado);
return (0);
}
