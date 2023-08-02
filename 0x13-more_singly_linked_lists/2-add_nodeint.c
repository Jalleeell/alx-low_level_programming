#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer to the beginning of a listint_t list
 * @n: integer to add to the list
 *
 * Return: address of nv node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nv;

	if (!head)
		return (NULL);
	nv = malloc(sizeof(listint_t));
	if (!nv)
		return (NULL);
	nv->n = n;
	nv->next = *head;
	*head = nv;
	return (nv);
}
