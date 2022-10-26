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
	char hex[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'a', 'b', 'c', 'd', 'e', 'f'};

	ch = 0;

	for (ch = 0; ch <= 15; ch++)
	{
		putchar(hex[ch]);
	}
	putchar('\n');
	return (0);
}
