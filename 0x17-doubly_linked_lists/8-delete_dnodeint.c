#include "lists.h"

/***/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr = *head;
	dlistint_t *tmp;

	if (head == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		curr = curr->next;
		if (curr == NULL)
			return (-1);
	}

	tmp = curr->prev;
	tmp->next = curr->next;
	tmp = curr->next;
	tmp->prev = curr->prev;
	free(curr);

	return (1);
}
