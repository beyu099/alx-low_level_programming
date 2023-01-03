#include"main.h"

/**
 * _memset - fills memeory block with value
 * @s: starting address
 * @b: the desired value
 * @n: number of bytes
 * Return: starting address of the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
