#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Add new node at position in a linked list
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be inserted
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1 && current; i++)
		current = current->next;

	if (!current && i < idx - 1)
		return (NULL);

	if (!current->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
