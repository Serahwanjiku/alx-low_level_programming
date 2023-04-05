#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int j)
{
	if (j < 0)
		return (-1);
	if (j == 0)
		return (1);
	return (j * factorial(j	- 1));
}
