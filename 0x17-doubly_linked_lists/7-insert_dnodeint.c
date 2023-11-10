#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts new
 * node at any position
 * @head: points to the first node
 * @idx: the exact position of the node;
 * @h: head of the list
 * @n: shows data in the node;
 * Return:returns the inserted values
 *
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	dlistint_t *node;
	dlistint_t *temp = *head;

	node = malloc(sizeof(dlistint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		h = *head;
		*head = node;
		return (node);
	}

	for (p = 0; temp && p < idx; p++)
	{
		if (p == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
