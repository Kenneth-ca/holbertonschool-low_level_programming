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
	int abc;

	for (numero = '0' ; numero <= '9' ; numero++)
{
		putchar(numero);
}
	for (abc = 'a' ; abc <= 'f' ; abc++)
{
	putchar(abc);
}
	putchar(012);
	return (0);
}
