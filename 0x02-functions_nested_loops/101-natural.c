#include <stdio.h>

/**
 * main - computes and print the sum of multiples of 3 and 5
 *
 * Return: 0 if succed.
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = i + sum;
		}
	}
	printf("%d\n", sum);
	return (0);
}
