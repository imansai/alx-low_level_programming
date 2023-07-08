#include "hash_tables.h"

/**
 * key_index - Getting index at which a key and value pair are
 * supposed to be stored in array of a hash table.
 * @key: Key to get the index
 * @size: Array size of of the hash table.
 *
 * Return: Key index.
 *
 * Description: djb2 algorithm implemented.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
