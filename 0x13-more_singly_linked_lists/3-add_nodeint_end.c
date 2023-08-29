#include "lists.h"

/**
 *add_nodeint_end - function adds a new node at the end of a list
 *@head: pointer to first node of the list
 *@n: integer node to added at end of the list
 *Return: address to new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *temp;

	temp = *head;
	if (head == NULL)
		return (NULL);

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;


	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (*head);
}
