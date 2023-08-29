#include "lists.h"

/**
 *pop_listint - function deletes head node of the linked list
 *@head: pointer to the first node of the linked list
 *Return: data of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (*head == 0 || head == 0)
	{
		return (0);
	}
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
