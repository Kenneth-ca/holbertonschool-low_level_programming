#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int number, new;
for (new = 0; new < 10; new++)
{
	for (number = 0; number < 15; number++)
	{
	if (number > 9)
	_putchar(number / 10 + '0');
	_putchar(number % 10 + '0');
	}
_putchar(10);
}
}
