#include "lists.h"

/**
 * pop_listint - deletes the node head of linked list
 * @head: points to the first element in linked list
 *
 * Return: the deleted data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
