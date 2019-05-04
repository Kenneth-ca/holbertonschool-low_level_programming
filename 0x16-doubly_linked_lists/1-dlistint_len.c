#include "lists.h"

/**
 * dlistint_len - a function that prints the number of elements
 * @h: the list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
