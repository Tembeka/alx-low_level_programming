#include "main.h"
#include <string.h>

/**
 *helper - helper function
 *@s: string
 *
 *return:1 if the string is a palindrome, 0 otherwise
 */

int helper(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (helper(s, left + 1, right - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 *         - 1: if the string is a palindrome
 *         - 0: if the string is not a palindrome
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (helper(s, 0, length - 1));
}

