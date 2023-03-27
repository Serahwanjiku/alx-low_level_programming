#include "main.h"
/**
 * _strlen - return length of a string
 * @s: the string to be checked
 * Return: 0 always
 */
int _strlen(char *s)
{
int j;
int count = 0;
for (j = 0 ; s[j] != '\0' ; j++)
{
count++;
}
return (count);
}
