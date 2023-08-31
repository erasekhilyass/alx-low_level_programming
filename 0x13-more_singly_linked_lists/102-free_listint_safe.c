#include "lists.h"
/**
 * free_listint_safe - SETS a linked list FREE.
 * @h: pointer to the first node in the linked list.
 * Return:it should return a number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenGHT = 0;
	int diffERENT;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diffERENT = *h - (*h)->next;
		if (diffERENT > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lenGHT++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenGHT++;
			break;
		}
	}

	*h = NULL;

	return (lenGHT);
}
