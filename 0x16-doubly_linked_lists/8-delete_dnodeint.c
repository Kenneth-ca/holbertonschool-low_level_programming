#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes a node
 * @head: a pointer to a list
 * @index: the index
 *
 * Return: the sum.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int cont = 0;
	dlistint_t *temp, *aux, *node;

	temp = *head;
	if (index == 0 && temp != NULL)
	{
		aux = temp->next;
		node = temp;
		if (aux != NULL)
			aux->prev = NULL;
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
			if (aux != NULL)
				aux->prev = temp;
			free(node);
			temp->next = aux;
			return (1);
		}
		cont++;
		temp = temp->next;
	}
	return (-1);
}
