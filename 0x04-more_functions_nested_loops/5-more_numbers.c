#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, x = 0;

	while (x < 10)
	{
		for (i = 0; i < 14; i++)
		{
			_putchar((i) + '0');
		}
	_putchar('\n');
	x++;
	}
	_putchar('\n');
}
