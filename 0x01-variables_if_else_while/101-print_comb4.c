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
	int ch, a, b, c;

	ch = 0;
	for (ch = 1; ch < 999; ch++)
	{
		a = ch / 100;
		b = ch / 10;
		c = ch % 10;

		if (((a > b) || (b > c) || (a > c)) || ((a == b) || (a > c) || (b == c)))
		{
			continue;
		}

		putchar((a) + '0');
		putchar((b) + '0');
		putchar((c) + '0');
		if (ch == 999)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
