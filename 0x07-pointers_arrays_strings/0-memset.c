#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	insigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}
}
	return (s);
