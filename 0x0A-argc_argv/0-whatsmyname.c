#include <stdio.h>
#include "main.h"

/**
 * main - prints the programme name
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: 0 Always:
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
