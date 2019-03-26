#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: a pointer to a list
 *
 * Return: the sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
