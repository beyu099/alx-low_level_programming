#include "main.h"
#include <unistd.h>

/**
 * _putchar - outputs character o stdout
 *
 * @c: the printed character
 *
 * Return: On success 1
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

