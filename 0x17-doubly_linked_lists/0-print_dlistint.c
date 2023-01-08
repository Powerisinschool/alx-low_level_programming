#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 1;
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
