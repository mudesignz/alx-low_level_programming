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
	int ch, ch2;

	ch = 0;
	for (ch = 0; ch < 100; ch++)
	{
		ch2 = ch++;
		for (ch2 = 1 ; ch2 < 100; ch2++)
		{
		putchar((ch / 10) + '0');
		putchar((ch % 10) + '0');
		putchar(' ');
		putchar((ch2 / 10) + '0');
		putchar((ch2 % 10) + '0');
		if (ch2 == 99)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		}
		if (ch == 99)
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
