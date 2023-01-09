#include "lists.h"

/**
 * add_nodeint_end - Add a node to the start of a linked list
 * @head: The linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	/* Go to the end  of the linked list */
	while(head->next != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

	free(head);
}
