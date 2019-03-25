#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list.
 * @head: a pointer that enters to the function.
 * @str: a constant string that enters to the function.
 *
 * Return: A list.
 */
list_t *add_node_end(list_t **head, const char *str)
	{
	char *new_str;
	int length = 0;
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[length] != '\0')
		length++;
	new_str = strdup(str);

	new_node->str = new_str;
	new_node->len = length;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
