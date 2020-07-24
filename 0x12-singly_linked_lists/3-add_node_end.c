#include "lists.h"
/**
* _strlen - show the lenght of the string.
* @s: Pointer to string.
* Return: Integer - Lenght of string.
*/
int _strlen(const char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
/**
* add_node_end - add new node at the end of linked list.
* @head: head pointer.
* @str: pointer of string to copy n_node.
* Return: address of the new element.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *l_node;

	l_node = *head;

	n_node = malloc(sizeof(list_t));
	if (!n_node)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = _strlen(str);
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (*head);
	}
	else
	{
		while (l_node->next != NULL)
		{
			l_node = l_node->next;
		}
		l_node->next = n_node;
	}
	return (l_node);
}
