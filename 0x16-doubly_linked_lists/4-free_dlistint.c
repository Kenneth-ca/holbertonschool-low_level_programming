#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: a pointer to a list
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
