#include "lists.h"

/**
 * sum_dlistint - Sum all numbers in the linked list
 * @head: Head of the linked list
 *
 * Return: The sum of the numbers (int)*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	if (head == NULL)
		return (0);

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
