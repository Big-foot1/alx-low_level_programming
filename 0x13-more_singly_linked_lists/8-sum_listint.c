#include "lists.h"

/**
 *sum_listint - function calculates the sum of all nodes of a list
 *@head: pointer to the first node of a list
 *Return: sum of all data or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
