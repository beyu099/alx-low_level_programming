#include "main.h"

/**
 * _isalpha -  checks for alphabets
 * @c: is to be checked
 * Return: 1 if c is a letter, ) otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
