#include "lists.h"

/**
 *_strlen - function calculates the  string length
 *@str: the string passed to the function
 *Return: Length of a string
 */

int _strlen(const char *str)
{
	int i = 0;
	char end_char = '\0';

	if (str == NULL)
		return (0);
	while (*(str + i) != end_char)
	{
		i++;
	}
	return (i);
}
/**
 *add_node_end - function that adds a new node at the end of a list_t list.
 *@head: head node of the list
 *@str: string to passed to the function to be copied
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;

	temp = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (*head);
}
