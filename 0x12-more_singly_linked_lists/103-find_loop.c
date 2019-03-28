#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds a loop
 * @head: a pointer to a list
 *
 * Return: a pointer to a list.
 */
listint_t *find_listint_loop(listint_t *head)
{
	int length = 0;

	while (head != NULL)
	{
		head = head->next;
		length++;
	}
	return (head);
}
