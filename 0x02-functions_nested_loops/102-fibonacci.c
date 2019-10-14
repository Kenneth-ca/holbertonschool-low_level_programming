#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 if succed.
 */

int main(void)
{
	int i;
	long fib = 0, fib_prev = 2, fib_prev_prev = 1;

	printf("%li, ", fib_prev_prev);
	printf("%li, ", fib_prev);
	for (i = 2; i < 50; i++)
	{
		fib = fib_prev + fib_prev_prev;
		printf("%li", fib);
		if (i < 49)
			printf(", ");
		else
			printf("\n");
		fib_prev_prev = fib_prev;
		fib_prev = fib;
	}
	return (0);
}
