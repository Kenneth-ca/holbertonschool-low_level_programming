#include <stdio.h>

/**
 * main - check the code for Holberton School students
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

unsigned long i, j, num, prime, large;

num = 612852475143;
large = 0;
for (i = 2; i <= num; i++)
{
	if (num % i == 0)
	{
	prime = 1;
		for (j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			prime = 0;
		}
		if (prime == 1)
		{
			if (i > large)
			large = i;
		}
	}
}
printf("%lu\n", large);
return (0);
}
