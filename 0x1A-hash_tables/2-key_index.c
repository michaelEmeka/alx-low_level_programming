#include "hash_tables.h"

/**
 * key_index - gives the index of a key using djb2 algorithm.
 * @key: key or hash node.
 * @size: size of hash table.
 * Return: The index at which the key/value pair should.
 * be stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
