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

	while (s < n)
	{
		if (n <= 0)
			break;
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		s++;
	}
	_putchar('\n');
}
