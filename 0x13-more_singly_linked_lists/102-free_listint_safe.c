#include "lists.h"

/**
 * free_listint_safe - this frees a linked list
 * @h: points to the first node in the linked list
 *
 * Return: the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int i;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
			if (i == 0)
			break;
		}
	}

	return (len);
}
