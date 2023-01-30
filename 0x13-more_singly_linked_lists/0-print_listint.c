#include "lists.h"

/**
 * print_listint - prints all the elements of a linked test
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const list_int *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n" h->n);
		num++;
		h = h->next;
	}
	return (num);
}
