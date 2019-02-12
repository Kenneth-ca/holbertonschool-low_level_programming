#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int uno, dos, tres, cuatro;

for (uno = 0; uno <= 2; uno++)
{
	for (dos = 0; dos <= 9; dos++)
	{
		for (tres = 0; tres < 6; tres++)
		{
			for (cuatro = 0; cuatro <= 9; cuatro++)
			{
			if (uno < 2 || (uno == 2 && dos < 4))
			{
			_putchar(uno + '0');
			_putchar(dos + '0');
			_putchar(58);
			_putchar(tres + '0');
			_putchar(cuatro + '0');
			_putchar(10);
			}
			}
		}
	}
}
}
