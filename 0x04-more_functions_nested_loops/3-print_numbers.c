#include "main.h"

/**
 * Print Number: Checks through 0-9 for numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
