#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Not required since it's void
 */
void print_alphabet_x10(void)
{
	int i;
	int x = 0;

	while (x < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		x++;
	}
}
