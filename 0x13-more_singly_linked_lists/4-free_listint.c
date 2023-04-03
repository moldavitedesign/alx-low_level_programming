#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t linked list.
 * @head: Address of the first node of the list.
 **/
void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}

