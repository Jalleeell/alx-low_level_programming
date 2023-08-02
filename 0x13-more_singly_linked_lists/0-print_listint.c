#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  print all the elements of a listint_t list.
 * @h: list to be printed
 *
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
