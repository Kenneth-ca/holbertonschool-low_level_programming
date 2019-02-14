#include <stdio.h>

/**
 * main - check the code for Holberton School students
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int cont;

for (cont = 1; cont <= 100; cont++)
{
	if (cont % 3 == 0)
	{
		if (cont % 5 == 0)
		printf("FizzBuzz ");
		else
		printf("Fizz ");
	}
	else if (cont % 5 == 0)
		if (cont == 100)
		printf("Buzz");
		else
		printf("Buzz ");
	else
		printf("%d ", cont);
}
printf("\n");
return (0);
}
