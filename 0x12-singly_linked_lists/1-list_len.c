#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: pointer to list_t
 *
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
