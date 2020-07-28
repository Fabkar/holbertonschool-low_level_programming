#include "lists.h"
/**
* add_nodeint_end - add new node at the end of a listint_t.
* @head: head pointer.
* @n: integer to copy n_node.
* Return: address of the new element.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *last_node;

	last_node = *head;

	if (!head)
		return (NULL);
	aux = malloc(sizeof(listint_t));
	if (!aux)
		return (NULL);

	aux->n = n;
	aux->next = NULL;
	if (*head == NULL)
	{
		*head = aux;
		return (aux);
	}
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = aux;
	}
	return (aux);
}
