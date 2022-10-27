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
	char *n;

	n = s;

	i = strlen(s);
	for (c = 0; c <= i; c++)
	{
		i--;
		n[c] = s[i];
	}

	s[i] = n[c];

}
