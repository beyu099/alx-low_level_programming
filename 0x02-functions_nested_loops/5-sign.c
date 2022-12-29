#include "main.h"

/**
 *print_sign - prints the sign of a number
 *@n: the int to check
 *Return: 1 and +, if int is greater than zero and prints 0 if n is zero
 **
 */



int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	} else if (n == 0) {
		_putchar (48);
		return (0);
	} else if (n < 0)
	{
		_putchar('_');
	}
	return (-1);
}
