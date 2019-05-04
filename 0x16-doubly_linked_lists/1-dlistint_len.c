#include "lists.h"

/**
 * dlistint_len -
 *
 * Return: 
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
