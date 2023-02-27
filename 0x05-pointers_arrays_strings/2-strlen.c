#include "main.h"
#include <stddef.h>

/**
 * _strlen - Returns length of a string
 * @s: string
 * Return: Length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
	longi++;
	s++;
	}
	return (longi);
}
