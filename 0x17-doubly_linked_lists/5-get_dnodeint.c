#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves node at given index in linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to retrieve.
 *
 * Return: If the node at the specified index exists, return a pointer to it.
 *         Otherwise, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
