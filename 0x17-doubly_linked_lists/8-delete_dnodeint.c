#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - this deletes a node in a list at a certain index
 * @index: index of the node to delete
 * @head: points to the first element in the list
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int p;
	dlistint_t *h1;
	dlistint_t *h2;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;
	p = 0;

	while (h1 != NULL)
	{
		if (p == index)
		{
			if (p == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		p++;
	}

	return (-1);
}
