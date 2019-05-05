#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to a list
 * @idx: the index
 * @n: the data
 *
 * Return: the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cont = 0;
	dlistint_t *node, *temp, *aux;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	if (idx == 0)
	{
		node->n = n;
		node->next = *h;
		*h = node;
		return (*h);
	}
	temp = *h;
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
