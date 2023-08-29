#include "lists.h"

/**
 *get_nodeint_at_index - function returns the nth node of a list
 *@head: pointer to the first node of the list
 *@index: the index of the node starting from zero
 *Return: address of the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node;
	unsigned int n;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = head;
	for (n = 0; n < index; n++)
	{
		if (new_node->next == NULL)
		{
			return (NULL);
		}
		new_node = new_node->next;
	}
	return (new_node);
}
