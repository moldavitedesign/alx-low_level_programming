#include "lists.h"

/**
 * free_listint_safe - Safely frees a listint_t linked list
 * @h: A pointer to the address of the head of the listint_t list
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_nodes = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (num_nodes);

	current = *h;
	while (current != NULL)
	{
		num_nodes++;
		temp = current;
		current = current->next;
		free(temp);

		if (temp <= current)
			break;
	}

	*h = NULL;

	return (num_nodes);
}

