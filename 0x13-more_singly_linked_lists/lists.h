#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
int _putchar(char c);
size_t print_listint(const listint_t *h);
/*
Prototypes last project
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
*/
#endif/*_LISTS_H_*/
