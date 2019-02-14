#include "holberton.h"

/**
 * print_numbers - check the code for Holberton School students
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
int number;
for (number = 0; number < 10; number++)
_putchar(number + '0');
_putchar(10);
}
