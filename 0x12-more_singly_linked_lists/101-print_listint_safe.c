#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a list (safe version)
 * @head: a pointer to a list
 *
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
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
