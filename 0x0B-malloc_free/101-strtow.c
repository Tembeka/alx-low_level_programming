#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow -  splits a string into words
 * @str - string
 *
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	int num_words, i, j;
	char *token, **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = 0;
	token = strtok(str, " ");

	while (token != NULL)
	{
		num_words++;
		token = strtok(NULL, " ");
	}
	words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}
	token = strtok(str, " ");
	i = 0;

	while (token != NULL)
	{
		words[i] = (char *)malloc((strlen(token) + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strcpy(words[i], token);
		i++;
		token = strtok(NULL, " ");
	}
	words[num_words] = NULL;
	return (words);
}
