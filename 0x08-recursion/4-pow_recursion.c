#include "main.h"

/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: number to be raised
 * @y: power to be used
 *
 * Return: value of x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	int x, y;

	if (y - 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y -1));
}

