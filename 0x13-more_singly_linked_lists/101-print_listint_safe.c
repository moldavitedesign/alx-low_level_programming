#include "lists.h"

/**
 * print_listint_safe - Safely prints a linked list.
 * @head: Pointer to the first node in the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *current = head;
	const listint_t *next;

	while (current != NULL)
	{
		num_nodes++;
		printf("[%p] %d\n", (void *)current, current->n);

		next = current->next;
		if (next >= current)
			current = next;
		else
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
	}

	return (num_nodes);
}

