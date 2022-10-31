#include <stdio.h>
#include "main.h"
/**
 * print_square - check the code
 * @n: input number of dashes
 * Return: Always 0.
 */
void print_square(int n)
{
	int i, s = 0;

	if (n < 1)
		_putchar('\n');
	while (s < n)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		s++;
	}
}
