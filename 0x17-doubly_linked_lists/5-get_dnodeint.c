#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function show nth node of a list.
 * @head: pointer to each node.
 * @index: integer to find.
 * Return: value in index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
