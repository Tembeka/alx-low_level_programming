#include "main.h"

/**
 * _strncpy - copy a string
 * _strncat -  concanates 2 strings
 * _strncat - concatenates n number of characters
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

/* _strncat - concatenates n number of characters*/
char *_strncat(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[j] = src[j];
	j++;
	}
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}
	return (dest);
}
