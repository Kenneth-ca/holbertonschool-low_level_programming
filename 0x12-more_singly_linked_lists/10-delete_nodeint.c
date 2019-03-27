#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at a given position
 * @head: a pointer to a list
 * @idx: the index
 *
 * Return: the sum.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cont = 0;
	listint_t *node, *temp, *aux;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (-1);
	}
	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (cont == index - 1)
		{
			aux = temp->next;
			free(*head);
			temp->next = node;
			node->next = aux;
			return (1);
		}
		cont++;
		temp = temp->next;
	}
	return (-1);
}
