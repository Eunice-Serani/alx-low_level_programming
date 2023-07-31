#include "lists.h"

/**
 * listint_len - this returns the number of elements in linked lists
 * @h: shows linked list of type of listint_t to traverse
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
