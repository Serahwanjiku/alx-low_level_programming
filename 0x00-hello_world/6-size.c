#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */
int main(void)

{
printf("size of char: %lu byte(s)", sizeof(char));
printf("size of an int: %lu byte(s)", sizeof(int));
printf("Size of a long int: %lu byte(s)", sizeof(long int));
printf("size of a long long int: %lu byte(s)", sizeof(long long int));
printf("size of a float: %lu byte(s)", sizeof(float));
return (0);
}
