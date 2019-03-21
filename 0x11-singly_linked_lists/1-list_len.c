#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elemets in a linked list..
 * @h: a list that enters to the function.
 *
 * Return: A size.
 */
size_t list_len(const list_t *h)
{
int length = 0;

/* This will move through  */
while (h != NULL)
{
	h = h->next;
	length++;
}
return (length);
}
