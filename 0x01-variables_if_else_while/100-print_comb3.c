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

	cont = 0;

	for (cont = 0 ; cont <=  9 ; cont++)
	{
	for (numero = cont + 1 ; numero <= 9 ; numero++)
	{
		putchar(cont + 48);
		putchar(numero + 48);
	xc	if (cont * 10 + numero < 89)
		{
		putchar(054);
		putchar(040);
		}
	}
	}
	putchar(012);
	return (0);
}
