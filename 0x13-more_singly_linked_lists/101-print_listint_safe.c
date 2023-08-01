#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of nodes in a looped list
 * print_listint_safe - Function that prints a linked list with loop safely
 * @head: Points to the first node of a list
 *
 * Return: New_node in a list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new_temp_n = NULL;

	const listint_t *new_l_n = NULL;

	size_t new_node_counter = 0;
	size_t new_new_n;

	new_temp_n = head;
	while (new_temp_n)
	{
		printf("[%p] %d\n", (void *)new_temp_n, new_temp_n->n);
		new_node_counter++;

		new_temp_n = new_temp_n->next;
		new_l_n = head;
		new_new_n = 0;

		while (new_new_n < new_node_counter)
		{
			if (new_temp_n == new_l_n)
			{
				printf(" -> [%p] %d\n", (void *)new_temp_n, new_temp_n->n);
				return (new_node_counter);
			}
			new_l_n = new_l_n->next;
			new_new_n++;
		}

		if (!head)
			exit(98);
	}
	return (new_node_counter);
}
