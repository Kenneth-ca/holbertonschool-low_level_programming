#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: a pointer to a list
 *
 * Return: a pointer to a list.
 */
listint_t *reverse_listint(listint_t **head)
{
	int length = 0;

	while (head != NULL)
	{
		*head = (*head)->next;
		length++;
	}
	return (*head);
}
