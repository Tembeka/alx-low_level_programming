#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: returns pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size == 0)
	{
		return (NULL);
	}

	t = malloc(size * sizeof(char));
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
