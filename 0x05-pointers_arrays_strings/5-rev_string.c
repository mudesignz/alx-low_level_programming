#include "main.h"
/**
 * rev_string - entry point
 * @s: data input by user
 *
 * Description: 'returns int to main program'
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i, c;

	i = strlen(s);
	for (c =0; c <= i; c++)
	{
		i--;
		if (s[i] != '\0')
		{
		_putchar(s[i]);
		}
	}
	_putchar('\n');
}
