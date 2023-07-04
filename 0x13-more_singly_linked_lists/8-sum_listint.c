#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: a pointer to a pointer to the head
 *
 * Return: sum of all the data, if NULL 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
