#include <stdio.h>
#include "main.h"

/**
 * main - prits all arguement received
 * @argc: number of arguemets
 * @argv: array of arguements
 * Return: 0 Alwyas
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
