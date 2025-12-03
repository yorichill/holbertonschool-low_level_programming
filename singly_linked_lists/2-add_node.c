#include "lists.h"
#include <stdlib.h> /* Pour malloc, free */
#include <string.h> /* Pour strdup */

/**
 * _strlen - returns the length of a string.
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
static int _strlen(const char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head (start) of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int len;

	/* 1. Allocation du nouveau noeud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL); /* Échec de l'allocation */

	/* 2. Duplication de la chaîne et calcul de la longueur */
	if (str != NULL)
	{
		dup_str = strdup(str);
		if (dup_str == NULL)
		{
			free(new_node); /* Nettoyage si strdup échoue */
			return (NULL);
		}
		len = _strlen(str);
	}
	else
	{
		/* Si str est NULL, on stocke NULL et la longueur est 0 */
		dup_str = NULL;
		len = 0;
	}

	/* 3. Initialisation et liaison du nouveau noeud */
	new_node->str = dup_str;
	new_node->len = len;
	
	/* 4. Liaison: Le 'next' du nouveau noeud pointe vers l'ancienne tête */
	new_node->next = *head;

	/* 5. Mise à jour de la tête: Le pointeur 'head' est mis à jour */
	*head = new_node;

	return (new_node);
}