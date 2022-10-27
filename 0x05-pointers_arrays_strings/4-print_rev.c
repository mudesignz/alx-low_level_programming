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
		--i;
		if (s[i] != '\0' || s[i] != ' ')
		{
		_putchar(s[i]);
		}
		if (i == 0)
		{
			break;
		}
	}
	_putchar('\n');
}
