#include "lists.h"
/**
* add_nodeint - add new node at the beginning of a listint_t.
* @head: head pointer.
* @n: integer to copy n_node.
* Return: address of the new element.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *aux;

	if (!head)
		return (NULL);
	aux = malloc(sizeof(listint_t));
	if (!aux)
		return (NULL);

	aux->n = n;
	aux->next = *head;
	*head = aux;
	return (aux);
}
