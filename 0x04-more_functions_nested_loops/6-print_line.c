#include <stdio.h>
#include "main.h"

/**
 * prints_line - prints a straight line 
 * @n: parameters
 * Return: returns nothing
 */

void print_line(int n)
{
	while(n-- > 0)
	{

putchar('_');
	}
	putchar('\n');
}

