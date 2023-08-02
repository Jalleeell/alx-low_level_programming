#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the beginning of the list
 *
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *f;
	int n;

	if ((head) || (!*head))
		return (0);
	n = (*head)->n;
	f = (*head)->next;
	free(*head);
	*head = f;
	return (n);
}
