#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: a pointer to a pointer to the head
 * @index: node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			previous->next = current->next;
			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
		count++;
	}
	return (-1);
}
