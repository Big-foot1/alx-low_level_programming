#include "lists.h"

/**
 *reverse_listint - function prints reverse of a list
 *@head: pointer to the first node of a list
 *Return: Address of the head of the revesred list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *nextnode, *link = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (current != NULL)
	{
		nextnode = current->next;
		current->next = link;
		link = current;
		current = nextnode;
	}
	*head = link;
	return (*head);
}
