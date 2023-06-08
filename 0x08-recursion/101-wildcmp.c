#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
* strlen_no_wilds - Returns the length of a string,
*                   ignoring wildcard characters.
* @str: The string to be measured.
*
* Return: The length.
*/

int strlen_no_wilds(char *str)
{
int len = 0, index = 0;

if (*(str + index))
{
if (*str != '*')
len++;

index++;
len += strlen_no_wilds(str + index);
}

return (len);
}

/**
* iterate_wild - Iterates in string located at a wildcard
*                until it points to a non-wildcard character.
* @wildstr: string to be iterated through.
*/

void iterate_wild(char **wildstr)
{
if (**wildstr == '*')
{
(*wildstr)++;
iterate_wild(wildstr);
}
}

/**
* postfix_match - Checks if a string matches the postfix of
*                 another string containing wildcards.
* @str: string to be matched.
* @postfix: The postfix.
*
* Return: If strings and postfix are identical
* - a pointer to the null byte located at the end of postfix.
*         Otherwise - a pointer to the first unmatched character.
*/

char *postfix_match(char *str, char *postfix)
{
int str_len = strlen_no_wilds(str) - 1;
int postfix_len = strlen_no_wilds(postfix) - 1;

if (*postfix == '*')
iterate_wild(&postfix);

if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
{
postfix++;
return (postfix_match(str, postfix));
}

return (postfix);
}

/**
* wildcmp - Compares two strings considering wildcard characters.
* @s1: 1st string to be compared.
* @s2: 2nd string to be compared - may contain wildcards.
*
* Return: ireturns 1 If the strings are identical.
*         Otherwise - 0.
*/

int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
iterate_wild(&s2);
s2 = postfix_match(s1, s2);
}

if (*s2 == '\0')
return (1);

if (*s1 != *s2)
return (0);

return (wildcmp(++s1, ++s2));
}
