#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - this adds a new node at the beginning of a dlistint_t list
 * @head: head of the list
 * @n: shows the value of the element
 *
 * Return: the address to the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)

	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
