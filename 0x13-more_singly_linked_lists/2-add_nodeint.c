#include "lists.h"

/**
 *add_nodeint - function adds a new node at the beginning of a list
 *@head: address to the first node of the list
 *@n: new integer node to add at the beginning of the list
 *Return: Address of the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = 0;

	if (head == 0)
	{
		return (0);
	}
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == 0)
	{
		return (0);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
