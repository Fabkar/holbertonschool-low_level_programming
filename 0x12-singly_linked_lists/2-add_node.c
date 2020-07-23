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
* add_node - add new node at the beginning of linked list.
* @head: head pointer.
* @str: pointer of string to copy n_node.
* Return: Numbers of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));
	if (!n_node)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = _strlen(str);
	n_node->next = *head;
	*head = n_node;
	return (*head);
}
