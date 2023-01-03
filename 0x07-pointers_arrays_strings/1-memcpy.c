#include "main.h"

/**
 * _memcpy - it copies memory area
 * @dest: where it's stored
 * @src: copied path
 * @n: bytes number
 * Return: returns the storage
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
