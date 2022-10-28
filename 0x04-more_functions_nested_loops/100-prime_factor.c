#include <stdio.h>

/**
 * main- check the code.
 *  character input
 * Return: Always 1 if c is upper case. otherwise 0..
*/
int main(void)
{
	int i;
	long big, num = 612852475143;

	for (i = 1; i < num; ++i)
	{
		if (num % i == 0)
		{
			big = i;
		}
	}
	printf("%ld\n", big);
	return (0);
}
