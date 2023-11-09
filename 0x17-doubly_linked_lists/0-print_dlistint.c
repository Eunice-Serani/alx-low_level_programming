#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - creates all the elements of a linked list to print
 * @h: points linked list of type of listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numb = 0;

	while (h)
	{

		printf("%d\n", h->n);
		h = h->next;
		numb++;
	}

	return (numb);
}
