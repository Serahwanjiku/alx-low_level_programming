#include "main.h"
/**
 * _isdigit - check if a character is digit
 *
 * @i: the number to be checked
 * Return: 1 for the character that will be a digit or 0 for any else
 */
int _isdigit(int i)
{
if (i >= 0 && i <= 9)
{
return (1);
}
return (0);
}
