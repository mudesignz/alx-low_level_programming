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
	int ch;

	ch = 0;

	for (ch = 0; ch <= 9; ++ch)
	{
		putchar(ch + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
