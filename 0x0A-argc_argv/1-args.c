#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguements passed to the programme
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);
	return (0);
}

