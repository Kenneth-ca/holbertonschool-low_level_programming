#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numero;

	for (numero = 0; numero < 10 ; numero++)
	{
		printf("%d", numero);
	}
	printf("\n");
	return (0);
}
