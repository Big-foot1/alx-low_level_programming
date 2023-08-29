#include "lists.h"

/**
 *free_listint - function frees the list
 *@head: pointer to first node of the list
 *Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	if (head == 0)
		return;

	while (head->next != 0)
	{
		new = head->next;
		free(head);
		head = new;
	}
	free(head);
}
