#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 *
 * @a: argument for the function.
 * @n: argument for the function.
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i, aux;
n = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		aux = a[i];
		a[i] = a[n - i];
		a[n - i] = aux;
	}
}
