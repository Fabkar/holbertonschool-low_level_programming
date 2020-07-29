#include "lists.h"
/**
* get_nodeint_at_index - show nth node of a listint.
* @head: Pointer to head of the linked list.
* @index:  is the index of the node.
* Return: the nth node of a listint_t linked list.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (!head)
		return (NULL);
	for (a = 0; a != index; a++)
	{
		head = (head)->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
