#include "main.h"

/**
 * _isupper- check the code.
 * @c: character input
 * Return: Always 1 if c is upper case. otherwise 0..
*/
int _isupper(int c)
{
	for (c = 'A'; c <= 'z'; c++)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}
	return (c);
}
