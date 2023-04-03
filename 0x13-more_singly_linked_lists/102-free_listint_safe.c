#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a linked list.
 * @h: Address of the first node of the list.
 *
 * Return: Number of nodes freed.
 **/
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp, *current = NULL;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			current = *h;
			*h = (*h)->next;
			len++;
			free(current);
		}
		else
		{
			temp = *h;
			*h = NULL;
			len++;
			free(temp);
			break;
		}
	}
	return (len);
}

