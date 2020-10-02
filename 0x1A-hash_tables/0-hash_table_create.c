#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: the size of a array.
 * Return: new hash_table_t otherwise return null.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tmp = NULL;

	if (size == 0)
		return (NULL);
	tmp = calloc(1, sizeof(hash_table_t));
	if (!tmp)
		return (NULL);
	tmp->size = size;
	tmp->array = calloc(size, sizeof(hash_node_t *));
	if (!(tmp->array))
	{
		free(tmp);
		return (NULL);
	}
	return (tmp);
}
