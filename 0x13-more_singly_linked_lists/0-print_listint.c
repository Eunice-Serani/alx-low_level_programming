#include "lists.h"

/**
 * print_listint - creates all the elements of a linked list
 * @h: shows a linked list of type of listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numb++;

	}

	return (numb);
}
