#include "main.h"

/**
 * _strlen - retourne la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne de caractères
 *
 * Description: cette fonction compte et retourne le nombre
 * de caractères dans la chaîne pointée par s (hors '\0')
 *
 * Return: la longueur de la chaîne
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
