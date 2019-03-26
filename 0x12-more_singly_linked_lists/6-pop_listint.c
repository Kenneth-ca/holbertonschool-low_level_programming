#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: a pointer to a list
 *
 * Return: the head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int storage;

	if (head == NULL)
		return (0);
	temp = *head;
	storage = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;

	return (storage);
}
