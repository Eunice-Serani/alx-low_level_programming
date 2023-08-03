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
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t node_count = 0;
	int flag = 0;
	const listint_t *stop;

	if (head == NULL || head->next == NULL)
		exit(98);
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = (fast->next)->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			stop = slow;
			break;
		}
	}

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_count++;

		if (head == stop && flag == 0)
			flag++;
		else if (head == stop && flag == 1)
		{
			printf("-> [%p] %d\n", (void *)stop, stop->n);
			break;
		}
	}
	return (node_count);
}
