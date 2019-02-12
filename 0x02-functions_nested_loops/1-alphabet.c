#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{

int abc;

for (abc = 'a'; abc <= 'z' ; abc++)
{
	_putchar(abc);
}
	_putchar('\n');
}
