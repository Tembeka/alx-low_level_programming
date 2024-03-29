#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_listint - function that prints all the elements of a listint_t list.
 *@h:  pointer to the head node.
 *
 *Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
