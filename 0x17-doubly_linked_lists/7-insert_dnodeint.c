#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node at an index
 * @h: A pointer to the linked list
 * @idx: The index to insert at
 * @n: The value to be inserted
 *
 * Return: The inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *curr;
	unsigned int i;

	if (new == NULL)
		return (NULL);

	curr = *h;
	for (i = 0; i < idx; i++)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}

	new->n = n;
	new->next = curr;
	new->prev = curr->prev;
	curr->prev = new;
	if (new->prev != NULL)
		new->prev->next = new;
	else
		*h = new;

	return (new);
}
