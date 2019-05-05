#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * @head: a pointer to a list
 * @n: the data
 *
 * Return: a list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (*head != NULL)
		(*head)->prev = new_node;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
