#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - returns the elements of a list
 * @h: a pointer to a list
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int length;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
