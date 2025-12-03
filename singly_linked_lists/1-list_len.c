#include "lists.h"
#include <stddef.h>

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head (start) of the list.
 *
 * Return: The number of nodes (elements) in the list.
 */

size_t list_len(const list_t *h)
{
    size_t node_count = 0;
    const list_t *current = h;

    while (current != NULL)
    {
        current = current->next;
        node_count++
    }

    return (node_cunt);
}
