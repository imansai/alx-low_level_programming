#include "hash_tables.h"

/**
 *hash_table_get - Get key-associated value in hash table.
 * @ht: Pointer to hash table
 * @key: Key to get the value from
 *
 * Return: If failed - NULL.
 * Else - key-associated value in hash table.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
