#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - check the code for Holberton School students
 * @a: argument for the function
 * @b: argument for the function
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
