#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head (start) of the list.
 *
 * Return: The number of nodes (elements) in the list.
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}

		current = current->next;
		node_count++;
	}

	return (node_count);
}