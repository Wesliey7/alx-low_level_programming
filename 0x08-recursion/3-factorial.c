#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be used
 *
 * Return: factorial of the given number
 */
int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_ factorial = factorial(n - 1);
	return (n * next_factorial);
}
