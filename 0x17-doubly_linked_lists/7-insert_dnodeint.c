#include "lists.h"

/***/
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

	/*while (curr->prev != NULL)
		curr = curr->prev;
	*h = curr;*/

	return (new);
}
