#include "main.h"
/**
 * _puts - entry point
 * @a: char data input by user
 *
 * Description: 'returns int to main program'
 * Return: Always 0 (Success)
 */
void _puts(char *a)
{
	int c = 0;

	while (a[c] != '\0')
	{
		_putchar(a[c]);
	}
}
