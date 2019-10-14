#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 if succed.
 */

int main(void)
{
	int i, fib = 0, fib_prev = 2, fib_prev_prev = 1, sum = 0;

	for (i = 2; i < 50; i++)
	{
		fib = fib_prev + fib_prev_prev;
		if (fib > 4000000)
			break;
		if (fib % 2 == 0)
			sum = sum + fib;
		fib_prev_prev = fib_prev;
		fib_prev = fib;
	}
	printf("%d\n", sum);
	return (0);
}
