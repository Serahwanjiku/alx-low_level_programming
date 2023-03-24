#include " main.h"

/**
 * _isdigit - checks for characters that are digits
 *  @i:character
 *
 * Return: 0 or 1
 */


int _isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	else
		return (0);
}
