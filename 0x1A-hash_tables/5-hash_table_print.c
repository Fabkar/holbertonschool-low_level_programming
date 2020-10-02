#include "hash_tables.h"
/**
 * hash_table_print - print key/value in the order.
 * @ht: pointer to hash table.
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *n_node = NULL;
	int flag = 0;

	if (!ht)
		return;

	putchar('{');
	while (i < ht->size)
	{
		n_node = ht->array[i];
		while (n_node)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", n_node->key, n_node->value);
			flag = 1;
			n_node = n_node->next;
		}
		i++;
	}
	printf("}\n");
}
