#include <stdio.h>
#include "main.h"
/**
 * print_square - check the code
 * @n: input number of dashes
 * Return: Always 0.
 */
int print_no(void)
{
	int i, s = 0;
	char fiz[5], buz[5], fb[9];
	fiz[5] = "Fizz";
	buz[5] = "Buzz";
	fb[9] = "FizzBuzz";
	for (i = 0; i < 100; i++)
		{
		    if(i % 3 == 0)
                _putchar(fiz + ' ');
            else if(i % 5 == 0)
                _putchar(buz + ' ');
            else if(i % 5 == 0 && i % 3 == 0)
                _putchar(fb + ' ');
            else
                _putchar(i + ' ');
		}
		_putchar('\n');
	}
