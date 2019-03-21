#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list.
 * @h: a list that enters to the function.
 *
 * Return: A size.
 */
size_t print_list(const list_t *h)
{
int length;

while (h != NULL)
{
	if (h->str == NULL)
		printf("[0] %p\n", h->str);
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	length++;
}
return (length);
}
