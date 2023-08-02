#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the beginning of the list
 * @n: integer to add to the list
 *
 * Return: pointer to the nv node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nv;
	listint_t *k;

	if (!head)
		return (NULL);
	nv = malloc(sizeof(listint_t));
	if (!nv)
		return (NULL);
	nv->n = n;
	nv->next = NULL;
	if (*head == NULL)
	{
		*head = nv;
		return (nv);
	}
	k = *head;
	while (k->next != NULL)
	{
		k = k->next;
	}
	k->next = nv;
	return (nv);
}
