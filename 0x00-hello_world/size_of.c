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
	    int intType;
	    float floatType;
	    long longType;
	    long long long2Type;
	    double doubleType;
	    char charType;

	    /* sizeof evaluates the size of a variable*/
	    printf("Size of a char: %zu byte\n", sizeof(charType));
	    printf("Size of int: %zu bytes\n", sizeof(intType));
	    printf("Size of float: %zu bytes\n", sizeof(floatType));
	    printf("Size of double: %zu bytes\n", sizeof(doubleType));
	    return (0);
}
