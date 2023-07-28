#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - shows number of elements in linked list
 * @h: A linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
