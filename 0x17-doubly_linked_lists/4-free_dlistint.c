#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_dlistint - free a list.
 * @head: pointer to each node.
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
