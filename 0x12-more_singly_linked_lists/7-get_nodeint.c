#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: a pointer to a list
 * @index: an unsigned int that reffers to an index
 *
 * Return: the nth node of a linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cont = 0;
	listint_t *node;

	if (!head)
		return (NULL);
	node = head;
	while (node != NULL)
	{
		if (cont == index)
		{
			return (head);
		}
	cont++;
	node = node->next;
	}
	return (NULL);
}
