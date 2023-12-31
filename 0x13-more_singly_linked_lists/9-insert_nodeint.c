#include "lists.h"

/**
 *insert_nodeint_at_index - function inserts a new node at a given position
 *@head: pointer to the first nodeof the list
 *@idx: the index of the list where the new node should be added.
 *@n: data element for put in the new node
 *Return: the address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *old;
	unsigned int m = 0;

	if (head == NULL)
		return (NULL);

	temp = *head;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0 || *head == NULL)
	{
		new->next = temp;
		*head = new;
		return (*head);
	}
	while (m < idx)
	{
		if (temp->next == NULL)
		{
			free(new);
			return (NULL);
		}
		old = temp;
		temp = temp->next;
		m++;
	}

	new->next = temp;
	old->next = new;
	return (new);
}
