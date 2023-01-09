#include "lists.h"

/**
 * add_dnodeint - Add a node to the start of a linked list
 * @head: The linked list
 * @n: The value
 *
 * Return: The number of elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	/* Create head if head does not exist */
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}

	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
