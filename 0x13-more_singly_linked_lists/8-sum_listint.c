#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Computes the sum of all integers in a list.
 * @head: Pointer to the first node of the list.
 * Return: The sum of all integers in the list.
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

