#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table.
 * @size: number of hash_nodes/size of array.
 * Return: pointer to the table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **arr;
	unsigned int i = 0;

	new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);
	new_table->size = size;

	arr = malloc(sizeof(hash_node_t) * size);
	if (!arr)
		return (NULL);
	while (i < size)
		arr[i] = NULL;
	new_table->array = arr;

	return (new_table);
}
