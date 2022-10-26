#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'The last digit'
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int ch[];

	ch = 0;

	for (ch = 0; ch <=16; ch++)
	{
		putchar((ch % 16) + '0');
	}
	putchar('\n');
	return (0);
}
