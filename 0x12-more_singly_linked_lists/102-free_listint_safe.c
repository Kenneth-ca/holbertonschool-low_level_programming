#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a list (safe version)
 * @h: a pointer to a list
 *
 * Return: an integer.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	int cont = 0;

	while (h != NULL)
	{
		temp = *h;
		free(temp);
		*h = (*h)->next;
		cont++;
	}
	return (cont);
}
