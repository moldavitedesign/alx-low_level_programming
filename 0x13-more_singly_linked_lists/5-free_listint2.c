#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t linked list and sets its head to NULL.
 * @head: Address of the pointer to the first node of the list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
	}
}

