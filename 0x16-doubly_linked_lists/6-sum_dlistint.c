#include "lists.h"

/**
 * sum_dlistint - returns the sum of all of the data of a linked list
 * @head: a pointer to a list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
