#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - this calculates the sum of all data in a dlistint_t list
 * @head: first node in the list
 *
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
