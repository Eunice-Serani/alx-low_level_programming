#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain point
 * of index in a linked list
 * @index: shows the index of node to return
 * @head: first node in the list
 *
 * Return: points to the node we are returning, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}
