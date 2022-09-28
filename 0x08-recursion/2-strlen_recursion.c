
#include "main.h"
/**
 * _int _strlen_recursion
 *  - returns the length of a strin
 *  @s: string to be used
 *
 *  Return: return lenght of the string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;
	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}


