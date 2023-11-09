#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - this adds a new node at the beginning
 * of a dlistint_t list
 * @head: head of the list
 * @n: shows the value of the element
 *
 * Return: the address to the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));

	if (!new)

	return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
