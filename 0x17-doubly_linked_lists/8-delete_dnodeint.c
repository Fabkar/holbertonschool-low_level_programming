#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - insert a new node in the given index.
 * @head: pointer to each node.
 * @index: index given.
 * Return: 1 if it succeeded else -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
			*head = NULL;
		else
		{
			(*head)->next->prev = NULL;
			(*head) = aux->next;
		}
		free(aux);
		return (1);
	}
	while (index != 0)
	{
		aux = aux->next;
		index--;
	}
	if (aux->next == NULL)
	{
		aux->prev->next = NULL;
		free(aux);
		return (1);
	}
	aux->prev->next = aux->next;
	aux->next->prev = aux->prev;
	free(aux);
	return (1);
}
