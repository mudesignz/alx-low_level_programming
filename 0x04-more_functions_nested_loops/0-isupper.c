#include "main.h"

/**
 * _isupper- check the code.
 * @c: character input
 * Return: Always 1 if c is upper case. otherwise 0..
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
			return (1);
		else
			return (0);
}
