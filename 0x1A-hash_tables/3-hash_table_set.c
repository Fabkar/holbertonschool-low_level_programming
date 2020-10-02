#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table.
 * @ht: hash table to uptade.
 * @key: pointe to key.
 * @value: value associated with the key.
 * Return: 1 it is success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *n_node = NULL, *tmp = NULL;

	if (!key || !value || strlen(key) == 0 || strlen(value) == 0)
		return (0);
	if (!ht || !(ht->array) || ht->size == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(key, tmp->key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	n_node = calloc(1, sizeof(hash_node_t));
	if (!n_node)
		return (0);
	n_node->key = strdup(key);
	if (!(n_node->key))
	{
		free(n_node);
		return (0);
	} n_node->value = strdup(value);
	if (!(n_node->value))
	{
		free(n_node->key), free(n_node);
		return (0);
	}
	n_node->next = ht->array[index], ht->array[index] = n_node;
	return (1);
}
