#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - check the code
 * @n: input number of dashes
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, s = 0;

	for (i = 0; i < n; i++)
	{
		if (s > i)
		{
			_putchar(' ');
			s++;
		}
		_putchar('\\');
	}
	_putchar('\n');
}
