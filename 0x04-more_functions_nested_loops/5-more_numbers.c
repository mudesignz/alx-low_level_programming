#include <stdio.h>
#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, x = 0;

	while (x < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	x++;
	}
}
