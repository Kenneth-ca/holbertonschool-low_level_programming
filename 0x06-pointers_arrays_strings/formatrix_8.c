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
int row, column, sum, sum1;
sum = 0;
sum1 = 0;

for (row = 0; row < size; row++)
{
	for (column = 0; column < size; column++)
	{
		if (row == column)
			sum = sum + a[row][column];
		if (row == (size - column)
			sum1 = sum1 + a[row][column];
	}
}
printf("%d, %d\n", sum, sum1)
}
