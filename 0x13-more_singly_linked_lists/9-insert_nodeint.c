#include "lists.h"

/**
* insert_nodeint_at_index - insert a node at index.
* @head: Pointer to head of the linked list.
* @idx:  is the index of the node.
* @n: integer.
* Return: listint_t.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node;
	listint_t *aux;
	unsigned int a;

	aux = *head;

	n_node = malloc(sizeof(listint_t));
	if (!n_node)
		return (NULL);
	n_node->n = n;
	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	for (a = 0; (a < (idx - 1)) && (aux != NULL); a++)
	{
		aux = aux->next;
	}
	if (!aux)
	{
		free(n_node);
		return (NULL);
	}
	n_node->next = aux->next;
	aux->next = n_node;
	return (n_node);
}
