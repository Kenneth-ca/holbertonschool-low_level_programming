#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a list
 * @idx: the index
 * @n: the data
 *
 * Return: the sum.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cont = 0;
	listint_t *node, *temp, *aux;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	if (idx == 0)
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (*head);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (cont == idx - 1)
		{
			node->n = n;
			aux = temp->next;
			temp->next = node;
			node->next = aux;
			return (node);
		}
		cont++;
		temp = temp->next;
	}
	return (NULL);
}
