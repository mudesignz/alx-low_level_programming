#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char strChar;
	int strInt;
	long strLInt;
	long long strLLInt
	float strFloat;

	printf("Size of a char: %zu byte(s)\n", strChar);
	printf("Size of a int: %zu byte(s)\n", strInt);
	printf("Size of a long int: %zu byte(s)\n", strLInt);
	printf("Size of a long long int: %zu byte(s)\n", strLLInt);
	printf("Size of a long float: %zu byte(s)\n", strFloat);
	return (0);
}
