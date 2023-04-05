#include "main.h"

int actual_sqrt_recursion(int p, int o);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @p: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int p)
{
	if (p < 0)
		return (-1);
	return (actual_sqrt_recursion(p, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @p: number to calculate the sqaure root of
 * @o: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int p, int o)
{
	if (o * o > p)
		return (-1);
	if (o * o == p)
		return (o);
	return (actual_sqrt_recursion(n, o + 1));
}
