#include "lists.h"

/**
 *delete_nodeint_at_index - function deletes a node at a particular index
 *@head: pointer to the first node of the list
 *@index: the index of the node to be deleted.
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *old;
	unsigned int n = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (n < index)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
		old = temp;
		temp = temp->next;
		n++;
	}
	old->next = temp->next;
	free(temp);
	return (1);
}
