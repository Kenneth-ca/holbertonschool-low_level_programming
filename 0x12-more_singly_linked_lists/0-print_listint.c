#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: a pointer to a list
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}
