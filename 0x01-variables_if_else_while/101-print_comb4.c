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
	int ch, a, b;

	ch = 0;
	for (ch = 0; ch < 90; ch++)
	{
		a = ch / 10;
		b = ch % 10;

		putchar((ch % 10) + '0');
		putchar((ch / 10) + '0');
		if (ch == 89)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
