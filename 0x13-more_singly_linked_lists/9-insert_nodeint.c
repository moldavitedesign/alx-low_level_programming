#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given position in a list.
 * @head: A pointer to the head of the list.
 * @index: The position to insert the new node at (starting from 0).
 * @n: The integer value to store in the new node.
 *
 * Return: A pointer to the newly inserted node or NULL if it failed.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (index == 0) {
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	for (i = 0; i < index - 1; i++) {
		if (current_node == NULL)
			return (NULL);
		current_node = current_node->next;
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}

