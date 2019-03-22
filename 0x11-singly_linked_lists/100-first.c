#include <stdio.h>

/**
 * tortoise_constructor - will print before the main function.
 *
 * Return: Always 0.
 */
void tortoise_constructor(void) __attribute__ ((constructor));
void tortoise_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
