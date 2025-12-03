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

	/* Loop through the list until the end (NULL) is reached */
	while (current != NULL)
	{
		/* Check the mandatory condition: If str is NULL */
		if (current->str == NULL)
		{
			/* The format [0] (nil) is required in this case */
			printf("[0] (nil)\n");
		}
		else
		{
			/* Normal format: [<length>] <string> */
			printf("[%u] %s\n", current->len, current->str);
		}

		/* Move to the next node in the chain */
		current = current->next;
		/* Increment the counter */
		node_count++;
	}

	return (node_count);
}