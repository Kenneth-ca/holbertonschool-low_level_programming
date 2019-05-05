#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: a pointer to a list
 * @index: and unsigned int that reffers to an index
 *
 * Return: the nth node of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cont = 0;
	dlistint_t *node;

	node = head;
	while (node != NULL)
	{
		if (cont == index)
		{
			head = node;
			return (head);
		}
	cont++;
	node = node->next;
	}
	return (NULL);
}
