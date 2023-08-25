#include "lists.h"
/**
 *_strlen - function calculates the string length
 *@str: the string passed to the function
 *Return: Length of a string passed to the function
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
 *add_node - function that adds a new node at the end of a list_t list.
 *@head: head node for the list
 *@str: string passed to the function to be coopied
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
