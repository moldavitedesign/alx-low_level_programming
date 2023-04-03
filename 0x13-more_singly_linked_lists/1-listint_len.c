#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list of type listint_t.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return count;
}

