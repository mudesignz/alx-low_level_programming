#include "main.h"
/**
 * swap_int - entry point
 * @a: data input by user
 * @b: data input by user
 * Description: 'returns int to main program'
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
