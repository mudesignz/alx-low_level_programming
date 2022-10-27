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
	int i, c = 0; 

	i = strlen(a);

	while (c < i)
	{
		_putchar(*a);
		c++;
	}
}
