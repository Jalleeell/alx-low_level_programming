#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the nv node is added
 * @n: data to insert in the nv node
 *
 * Return: pointer to the nv node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nv;
	listint_t *nx = *head;

	nv = malloc(sizeof(listint_t));
	if (!nv || !head)
		return (NULL);

	nv->n = n;
	nv->next = NULL;

	if (idx == 0)
	{
		nv->next = *head;
		*head = nv;
		return (nv);
	}

	for (i = 0; nx && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nv->next = nx->next;
			nx->next = nv;
			return (nv);
		}
		else
			nx = nx->next;
	}

	return (NULL);
}

