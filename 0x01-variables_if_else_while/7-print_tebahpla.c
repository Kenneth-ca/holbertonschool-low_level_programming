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
	char abc;

	for (abc = 'z' ; abc >= 'a' ; abc--)
{
		putchar(abc);
}
	putchar(012);
	return (0);
}
