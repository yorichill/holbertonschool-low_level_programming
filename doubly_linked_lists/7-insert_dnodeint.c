#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added (starting at 0).
 * @n: The integer value for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i = 0;

    if (idx == 0)
        return (add_dnodeint(h, n));

    current = *h;
    while (current != NULL && i < idx - 1)
    {
        current = current->next;
        i++;
    }

    if (current == NULL)
        return (NULL);

    if (current->next == NULL) /* Case: insertion at the end (idx is list length) */
        return (add_dnodeint_end(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    /* Mise à jour des liens du nouveau nœud */
    new_node->next = current->next;
    new_node->prev = current;
    /* Mise à jour des liens des nœuds voisins */
    current->next->prev = new_node;
    current->next = new_node;

    return (new_node);
}
