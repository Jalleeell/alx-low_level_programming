#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to the beginning of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *nx;

	while (head != NULL)
	{
		nx = head->nx;
		free(head);
		head = nx;
	}
}
