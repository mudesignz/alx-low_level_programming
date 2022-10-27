#include "main.h"
#include <string.h>
/**
 * _strlen - entry point
 * @s: data input by user
 *
 * Description: 'returns int to main program'
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int c, n, count = 0;

	n = strlen(s);
	for (c = 0; c <= n; c++)
	{
		count++;
	}
	return count;
}
