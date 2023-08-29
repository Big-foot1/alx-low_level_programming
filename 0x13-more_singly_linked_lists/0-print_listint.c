#include "lists.h"

/**
 *print_listint - function prints all elements of listint_t
 *@h: address to first node of the list
 *Return: number of nodes of the list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 1;

	if (h == 0)
	{
		return (0);
	}
	while (h->next != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	printf("%d\n", h->n);
	return (nodes);
}
