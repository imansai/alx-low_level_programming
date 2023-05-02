#include "lists.h"

/**
 * add_nodeint - adds new node at the start of a linked list
 * @head: points to the first node in the linked list
 * @n: data to be inserted new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
