#include "main.h"
/**
*_isdigit - Checks for a digit ( 0 through 9 ).
*@c: integer.
*Return: either 0 or 1.
*/
int _isdigit(int c)
{
        if ((c >= '0') && (c <= '9'))
        return (1);
        else
        return (0);
}
