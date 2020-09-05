#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end of a list..
 * @head: pointer to each node.
 * @n: data to store.
 * Return: new element added.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *h;

	last_node = malloc(sizeof(dlistint_t));
	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	if (!(*head))
	{
		last_node->next = NULL;
		last_node->prev = NULL;
		*head =	last_node;
	}
	else
	{
		h = *head;
		for (; h->next != NULL; h = h->next)
		{}
		last_node->next = NULL;
		last_node->prev = h;
		(h)->next = last_node;
	}
	return (last_node);
}
