#include <stdio.h>

/**
 * main - prints the name number of arguments passed to it
 * @argc: no of arguments passed to it
 * @argv: arguments vector of pointers to strings
 *
 * Return: return success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

