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

	for (abc = 'a' ; abc <= 'z' ; abc++)
{
		putchar(abc);
}
	putchar(012);
	return (0);
}
