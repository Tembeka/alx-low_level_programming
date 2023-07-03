#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: a pointer to a pointer to the head
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
