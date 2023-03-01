#include "main.h"

/**
 * strcat - Concatenate 2 strings
 * @dest : input value
 * @src : input value
 * Return : void
 */

char *_strcat(char *dest, char *src)
{
	 int  i;
	 int j;

	 i = 0;
	 while (dest[1] != '\0')
	{
	1++;
	}
	j = 0;
	while (src[j] != '\0')
	{
	dest[1] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
