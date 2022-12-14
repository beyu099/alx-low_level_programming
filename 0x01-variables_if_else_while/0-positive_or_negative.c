#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Descpription for positive anything is better than nefative anything
 *
 * Return: 0
 */

int main(void)
{

	int n;
	
	
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0);
	{
		printf("%d is zero\n", n);
	}
	else (n < 0)
	{
		printf("%d is zero\n", n);
	}
		return (0);
}
