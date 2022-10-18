#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr;
	/*press a character or a key*/
	printf("Enter Letter to find ASCII code: ");
	scanf("%c", &chr);
	printf("ASCII Value for %c is %d \n", chr, chr);
	return (0);
}
