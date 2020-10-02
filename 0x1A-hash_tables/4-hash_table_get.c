#include "hash_tables.h"
/**
 * hash_table_get - retrieve the value associated with the key.
 * @ht: hash table to check.
 * @key: pointer to key.
 * Return: the value depend.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!key || strlen(key) == 0 || !ht || !ht->array || ht->size == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(key, tmp->key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
