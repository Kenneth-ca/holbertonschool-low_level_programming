#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: a pointer to a list
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	*head = NULL;
}
