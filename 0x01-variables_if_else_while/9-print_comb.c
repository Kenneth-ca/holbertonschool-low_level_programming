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

	for (numero = 0 ; numero <= 9 ; numero++)
	{
		putchar(numero + 48);
		if (numero < 9)
		{
			putchar(054);
			putchar(040);
		}
	}
	putchar(012);
	return (0);
}
