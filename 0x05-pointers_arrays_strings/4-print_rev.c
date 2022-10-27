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
	int i;

	i = strlen(s);
	while (s[i] >= 0)
	{
		if(*s == '\0')
		{
			continue;
		}
		_putchar(s[i]);
		i--;
		if (i < 0)
		{
			break;
		}
	}
	_putchar('\n');
}
