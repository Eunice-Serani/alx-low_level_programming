#include "lists.h"

/**
 * dlistint_len - this returns the number of elements in linked lists
 * @h: shows linked list of type of listint_t to traverse
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
