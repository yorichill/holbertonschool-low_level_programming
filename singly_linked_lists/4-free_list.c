#include "lists.h"
#include <stdlib.h> /* Pour free */

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head (start) of the list.
 *
 * Description: Iterates through the list, freeing the string and the node
 * itself for every element.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		/* 1. Sauvegarder l'adresse du nœud suivant */
		next_node = current->next;

		/* 2. Libérer la chaîne de caractères (allouée par strdup) */
		/* Vérification nécessaire car str peut être NULL */
		if (current->str != NULL)
		{
			free(current->str);
		}

		/* 3. Libérer le nœud actuel lui-même */
		free(current);

		/* 4. Avancer au nœud sauvegardé */
		current = next_node;
	}
}