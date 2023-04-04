#include "lists.h"

size_t count_nodes_in_loop(listint_t *head);
size_t safe_free_listint(listint_t **h);

/**
 * count_nodes_in_loop - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t count_nodes_in_loop(listint_t *head)
{
    listint_t *tortoise, *hare;
    size_t nodes = 1;

    if (head == NULL || head->next == NULL)
        return (0);

    tortoise = head->next;
    hare = (head->next)->next;

    while (hare)
    {
        if (tortoise == hare)
        {
            tortoise = head;
            while (tortoise != hare)
            {
                nodes++;
                tortoise = tortoise->next;
                hare = hare->next;
            }

            tortoise = tortoise->next;
            while (tortoise != hare)
            {
                nodes++;
                tortoise = tortoise->next;
            }

            return (nodes);
        }

        tortoise = tortoise->next;
        hare = (hare->next)->next;
    }

    return (0);
}

/**
 * safe_free_listint - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t safe_free_listint(listint_t **h)
{
    listint_t *tmp;
    size_t nodes, index;

    nodes = count_nodes_in_loop(*h);

    if (nodes == 0)
    {
        for (; h != NULL && *h != NULL; nodes++)
        {
            tmp = (*h)->next;
            free(*h);
            *h = tmp;
        }
    }

    else
    {
        for (index = 0; index < nodes; index++)
        {
            tmp = (*h)->next;
            free(*h);
            *h = tmp;
        }

        *h = NULL;
    }

    h = NULL;

    return (nodes);
}

