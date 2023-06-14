#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, total_len, curr_index;
	char *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	concat = (char *)malloc((total_len + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	curr_index = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(concat + curr_index, av[i]);
		curr_index += strlen(av[i]);
		concat[curr_index++] = '\n';
	}
	concat[total_len] = '\0';
	return (concat);
}
