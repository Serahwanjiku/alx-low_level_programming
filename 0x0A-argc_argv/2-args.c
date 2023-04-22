#include "main.h"
#include <stdio.h>
/**
 * main - this program prints all the arguments
(* a blank line
*@argc: this is the quantity of parameters
*@argv: the parameter to put in the program.
* Description: this program prints all the arguments)?
* Return: return 0 or 1
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}

	return (0);
}
