#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at an index
 * @head: The head of the linked list
 * @index: The index to be deleted at
 *
 * Return: 1 on success and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i;

	if (curr == NULL)
		return (-1);

	for (i = 0; i < index && curr != NULL; i++)
	{
		curr = curr->next;
	}

	if (curr == NULL)
		return (-1);

	if (curr->prev != NULL)
		curr->prev->next = curr->next;
	else
		*head = curr->next;

	if (curr->next != NULL)
		curr->next->prev = curr->prev;

	free(curr);

	return (1);
}
