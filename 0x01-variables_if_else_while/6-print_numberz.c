#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int no;

	for (no = 0; no <= 9; no++)
		putchar((no % 10));

	putchar('\n');
	return (0);
}
