#include "main.h"
/**
 * _islower - check the code.
 * @c: is a single letter
 * Return: 1 if int c is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
