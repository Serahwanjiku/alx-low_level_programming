#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: function parameter
 * Return: always 0
 */
void print_rev(char *s)
{
int a;
int count = 0;
for (a = 0 ; s[a] != '\0' ; a++)
for (a = count ; a >= 0 ; a--)
_putchar(s[a]);
_putchar('\n');
}
