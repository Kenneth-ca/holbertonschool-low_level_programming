#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{

int abc, new;

for (new = 0 ; new < 10 ; new++)
{
	for (abc = 'a'; abc <= 'z' ; abc++)
	{
	_putchar(abc);
	}
_putchar('\n');
}
}
