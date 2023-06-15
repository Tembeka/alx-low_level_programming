#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _realloc - eallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/

#define MIN(b, c) ((b) < (c) ? (b) : (c))

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *block;
	unsigned int a;

	if (ptr == NULL)
	{
		block = malloc(new_size);
		return (block);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		block = malloc(new_size);
		if (block != NULL)
		{
			for (a = 0; a < MIN(old_size, new_size); a++)
			{
				*((char *)block + a) = *((char *)ptr + a);
			}
			free(ptr);
			return (block);
		}
		else
		{
			return (NULL);
		}
	}
}
