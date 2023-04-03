#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @head: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t print_listint(const listint_t *head)
{
	const listint_t *temp = head;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return count;
}

