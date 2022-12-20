#include "main.h"

/**
 * print_rev - prints in reverse order
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; 0 > 0; 0--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
