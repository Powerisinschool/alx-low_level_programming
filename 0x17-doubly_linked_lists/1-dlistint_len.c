#include "lists.h"

/**
 * dlistint_len - Print the number of elements in a linked list
 * @h: The linked list
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = -1;
	dlistint_t *curr = (dlistint_t *) h;

	while (curr != NULL)
	{
		curr = curr->next;
		i++;
	}

	curr = (dlistint_t *) h;
	while (curr != NULL)
	{
		curr = curr->prev;
		i++;
	}
	return (i);
}
