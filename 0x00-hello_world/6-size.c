#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char strChar[] = "Size of a char: 1 byte(s)";
	char strInt[] = "Size of an int: 4 byte(s)";
	char strLInt[] = "Size of a long int: 4 byte(s)";
	char strLLInt[] = "Size of a long long int: 8 byte(s)";
	char strFloat[] = "Size of a float: 4 byte(s)";

	printf("%s\n%s\n%s\n%s\n%s\n", strChar, strInt, strLInt, strLLInt, strFloat);
	return (0);
}
