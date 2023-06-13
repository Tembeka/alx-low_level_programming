#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: returns  pointer, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	concat = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}
