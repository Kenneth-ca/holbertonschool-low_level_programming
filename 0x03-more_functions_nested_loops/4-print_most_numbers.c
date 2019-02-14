#include "holberton.h"

/**
 * print_most_numbers - check the code for Holberton School students
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int number;
for (number = 0; number < 10; number++)
{
if (number != 2 && number != 4)
_putchar(number + '0');
}
_putchar(10);
}
