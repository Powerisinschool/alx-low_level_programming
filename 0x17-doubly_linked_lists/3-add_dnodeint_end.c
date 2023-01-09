#include "lists.h"

/**
 * add_dnodeint_end - Add a node to the start of a linked list
 * @head: The linked list
 * @n: The value
 *
 * Return: The number of elements
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;

	/* Create head if head does not exist */
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	new->prev = *head;
	new->next = NULL;

	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;

	return (new);
}
