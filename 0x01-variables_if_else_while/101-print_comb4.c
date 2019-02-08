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
	int cont;
	int third;

	cont = 0;
	third = 0;

	for (cont = 0 ; cont <=  9 ; cont++)
	{
	for (numero = cont + 1 ; numero <= 9 ; numero++)
	{
		for (third = numero + 1 ; third <= 9 ; third++)
		{
		putchar(cont + 48);
		putchar(numero + 48);
		putchar(third + 48);
		if (cont * 100 + numero * 10 + third < 789)
		{
		putchar(054);
		putchar(040);
		}
	}
	}
	}
	putchar(012);
	return (0);
}
