#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**                                                                                                                                           
 * main - Entry point                                                                                                                         
 *                                                                                                                                            
 * Return: Always 0 (Success)                                                                                                                 
 */
int main(void)
{
        int numero;
        int cont;

        cont = 0;

        for (numero = '0' ; numero <= '9' ; numero++)
{
        if (numero % 10 == 0)
        {
                cont = cont + 1;
        }
        putchar(cont + '0');
                putchar(numero);
                putchar(054);
                putchar(040);
}
        putchar(012);
        return (0);
}