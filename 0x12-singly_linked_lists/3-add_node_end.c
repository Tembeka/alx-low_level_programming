#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	list_t *head;
	head = NULL;
	list_t *new;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}

	new->str = strdup(" ");
	new->len = 1;
	new->next = NULL;

	if (head == NULL)
		head = new;
	else
	{
		list_t *current = head;

		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	n = list_len(head);
	printf("-> %lu elements\n", n);

	free(new->str);
	free(new);
	return (0);
}
