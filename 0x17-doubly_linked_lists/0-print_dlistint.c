#include "lists.h"

/**
 * print_dlistint - Print the number of elements in a linked list
 * @h: The linked list
 *
 * Return: The number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = -1;
	dlistint_t *curr = (dlistint_t *) h;

	if (h == NULL)
		return (0);

	while (curr != NULL)
	{
		printf("%i\n", curr->n);
		curr = curr->next;
		i++;
	}

	curr = (dlistint_t *) h;
	while (curr != NULL)
	{
		curr = curr->prev;
		if (curr != NULL)
			printf("%i\n", curr->n);
		i++;
	}
	return (i);
}
