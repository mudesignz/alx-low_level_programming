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
	int IntType;
	long LIntType;
	long long LLIntTyp;
	float FloatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(strChar));
	printf("Size of an int: %zu byte(s)\n", sizeof(IntType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(LIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(LLIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(FloatType));
	return (0);
}
