#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list
 * @head: a pointer to a pointer to the head
 * @index: index of the node we want to retrieve from the linked list.
 *
 * Return: nth node,if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		if (count == index)
		{
			return (curr);
		}
		count++;
		curr = curr->next;
	}
	return (NULL);
}
