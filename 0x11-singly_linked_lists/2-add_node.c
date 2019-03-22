#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - check the code for Holberton School students
 * @s: argument for the function
 *
 * Return: Always 0.
 */
	int _strlen(char *s)
	{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}
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
	new_str = strdup(str);
	length = _strlen(new_str);

	new_node->str = new_str;
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
