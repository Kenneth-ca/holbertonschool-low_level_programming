#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - check the code for Holberton School students
 * @n: argument for isalpha function
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int var;
if (n > 98)
{
for (var = n; var >= 98; var--)
{
printf("%d", var);
if (var != 98)
printf(", ");
}
}

if (n <= 98)
{
for (var = n; var <= 98; var++)
{
printf("%d", var);
if (var != 98)
printf(", ");
}

}
printf("\n");
}
