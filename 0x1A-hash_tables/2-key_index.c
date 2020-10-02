#include "hash_tables.h"
/**
 * key_index - fucntion to get the index key.
 * @key: pointer to index.
 * @size: size of the array.
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
