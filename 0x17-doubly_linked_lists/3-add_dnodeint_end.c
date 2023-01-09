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
	dlistint_t *temp;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/* Create head if head does not exist */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
