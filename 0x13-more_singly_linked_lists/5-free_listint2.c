#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: double pointer to the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nx;

	if (!head)
		return;
	while (*head)
	{
		nx = (*head)->next;
		free(*head);
		*head = nx;
	}
}
