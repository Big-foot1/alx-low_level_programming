#include "lists.h"

/**
 *free_listint2 - function frees the list and set head to NULL
 *@head: pointer to the first node of the list
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	new = *head;
	while (new->next != NULL)
	{
		temp = new->next;
		free(new);
		new = temp;
	}
	free(new);
	*head = NULL;
}
