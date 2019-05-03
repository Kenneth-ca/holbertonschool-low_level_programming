#include "lists.h"

/**
 * print_dlistint - a function that prints elements of a list
 * @h: the list
 *
 * Return: the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		i++;
	}
	return (i);
}
