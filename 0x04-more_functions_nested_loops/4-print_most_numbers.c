#include <stdio.h>
#include "main.h"
/**
 * print_numbers - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i ==4)
		{
			continue;
		}
		_putchar((i) + '0');
		i++;
	}
	_putchar('\n');
}
