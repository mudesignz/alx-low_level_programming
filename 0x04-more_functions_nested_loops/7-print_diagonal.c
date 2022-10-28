#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - check the code
 * @n: input number of dashes
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i <= 0)
			continue;
		_putchar('\\');
	}
	_putchar('\n');
}
