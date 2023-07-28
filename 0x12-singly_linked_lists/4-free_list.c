#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees the linked list
 * @head: A list_t lists a linked list that is to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
	}
}
