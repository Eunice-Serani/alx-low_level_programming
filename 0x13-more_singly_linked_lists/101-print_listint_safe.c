#include "lists.h"

/**
 * print_listint_safe - Function that prints a linked list
 *  with a loop safely
 * @head: Points to the first node of a list
 *
 * Return: Number of new nodes in a list, exit status 98 if it fails
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new_temp_n = NULL;
	const listint_t *new_l_n = NULL;

	size_t new_curr = 0;
	size_t new_new_n;

	new_temp_n = head;
	while (new_temp_n)
	{
		printf("[%p] %d\n", (void *)new_temp_n, new_temp_n->n);
		new_curr++;
		new_temp_n = new_temp_n->next;
		new_l_n = head;
		new_new_n = 0;
		while (new_new_n < new_curr)
		{
			if (new_temp_n == new_l_n)
			{
				printf("-> [%p] %d\n", (void *)new_temp_n, new_temp_n->n);
				return (new_curr);
			}
			new_l_n = new_l_n->next;
			new_new_n++;
		}

		if (!head)
		exit(98);
	}
	return (new_curr);
}
