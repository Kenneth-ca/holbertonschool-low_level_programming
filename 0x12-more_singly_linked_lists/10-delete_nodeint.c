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
	listint_t *temp, *aux, *node;

	temp = *head;
	if (index == 0 && temp != NULL)
	{
		aux = temp->next;
		node = temp;
		free(node);
		*head = aux;
		return (1);
	}
	while (temp != NULL)
	{
		if (cont == index - 1)
		{
			aux = temp->next->next;
			node = temp->next;
			free(node);
			temp->next = aux;
			return (1);
		}
		cont++;
		temp = temp->next;
	}
	return (-1);
}
