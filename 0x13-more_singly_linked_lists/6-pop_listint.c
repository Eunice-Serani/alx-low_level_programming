#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -this type deletes the head node of a linked list
 * @head: pionts to the first element in the list
 *
 * Return: data inside the elements that was deleted,
 *   or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
	return (0);

	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numb);
}
