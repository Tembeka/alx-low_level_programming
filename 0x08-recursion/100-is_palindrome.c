#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string
 *
 * return: 1 if the string is a palindrome, 0 otherwise
 * description:  a function that returns 1 if the string is a palindrome
 *         - 0 if the string is not a palindrome
 */

int is_palindrome(char *s)
{
	int left = 0;
	int right = strlen(s) - 1;

	while (left < right)
	{
		if (s[left] != s[right])
		{
			return (0);
		}

		left++;
		right--;
	}

	return (1);
}
