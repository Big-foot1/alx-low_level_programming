#include "lists.h"

/**
 *listint_len - function calculate number of elements of the list
 *@h: address to first node of the list
 *Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 1;

	if (h == 0)
	{
		return (0);
	}
	while (h->next != 0)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
