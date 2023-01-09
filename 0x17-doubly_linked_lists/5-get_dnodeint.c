#include "lists.h"

/**
 * get_dnodeint_at_index - Get the node at a particular index
 * @head: Head of the linked list
 * @index: index to get
 *
 * Return: Node at index of the linked list*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr;

	if (head == NULL)
		return (NULL);

	curr = head;
	for (i = 0; i < index; i++)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}

	return (curr);
}
