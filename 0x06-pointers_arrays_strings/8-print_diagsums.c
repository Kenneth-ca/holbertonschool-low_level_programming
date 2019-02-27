#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - prints buffer in hexa
 * @a: argument string
 * @size: size of the array
 *
 * Return: an array.
 */
void print_diagsums(int *a, int size)
{
	int i, all, sum, sum1;
	sum = 0;
	sum1 = 0;
	all = size * size;

	for (i = 0; i < all - 1; i += (size + 1))
		sum = sum + a[i];
	i = 0;
	for (i = size - 1; i < all - 1; i += (size - 1))
		sum1 = sum1 + a[i];
	printf("%d, %d\n", sum, sum1);
}
