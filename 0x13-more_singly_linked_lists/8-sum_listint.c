#include "lists.h"
/**
 * sum_listint - a f. that calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: the result
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *temp = head;

	while (temp)
	{
		s += temp->n;
		temp = temp->next;
	}

	return (s);
}
