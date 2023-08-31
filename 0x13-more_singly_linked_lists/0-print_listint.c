#include "lists.h"

/**
 * print_listint - make all the elements of a linked list printed
 * @h: linked list of type listint_t to print
 * Return: number n of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
