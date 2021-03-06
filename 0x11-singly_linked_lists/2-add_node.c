#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: a pointer that enters to the function.
 * @str: a constant string that enters to the function.
 *
 * Return: A list.
 */
	list_t *add_node(list_t **head, const char *str)
	{
	char *new_str;
	int length = 0;
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
