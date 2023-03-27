#include "main.h"
/**
 * swap_int - swap a to b
 * @a: value 1
 * @b: value 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int k;
k = *a;
*a = *b;
*b = k;
}
