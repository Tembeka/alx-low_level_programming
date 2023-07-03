#include "lists.h"
#include <stdio.h>

/**
 * listint_len - number of elements in a linked listint_t list.
 * @h: pointer to the head node.
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}
