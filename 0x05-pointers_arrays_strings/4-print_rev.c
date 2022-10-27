#include "main.h"
/**
 * print_rev - entry point
 * @s: data input by user
 *
 * Description: 'returns int to main program'
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	while (*s >= 0)
	{
		if (*s == '\0')
		{
			continue;
		}
		--s;
		_putchar(*s);
		if (s == 0)
		{
			break;
		}
	}
	_putchar('\n');
}
