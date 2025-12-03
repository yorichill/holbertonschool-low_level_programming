#include "lists.h"
#include <stdlib.h> /* Pour malloc, free */
#include <string.h> /* Pour strdup, strlen */

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head (start) of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current; /* Pointeur pour le parcours */

	/* 1. Allocation et gestion des erreurs de duplication */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplication et gestion de l'échec de strdup */
	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = strlen(str);
	}

	/* Le nouveau noeud sera le dernier, donc son 'next' est NULL */
	new_node->next = NULL;

	/* 2. Gérer le cas où la liste est vide */
	if (*head == NULL)
	{
		*head = new_node; /* Le nouveau noeud devient la tête */
		return (new_node);
	}

	/* 3. Parcourir la liste pour trouver le dernier nœud */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	/* 4. Liaison: Attacher le nouveau nœud à la fin */
	current->next = new_node;

	return (new_node);
}