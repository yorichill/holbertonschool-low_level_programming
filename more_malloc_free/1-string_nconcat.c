#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatène s1 et les n premiers octets de s2
 * @s1: première chaîne à copier
 * @s2: deuxième chaîne à copier après s1
 * @n: nombre d'octets de s2 à copier
 *
 * Description: Alloue dynamiquement un nouvel espace mémoire,
 * copie s1 puis les n premiers caractères de s2, et termine
 * par un caractère nul. Si s1 ou s2 est NULL, elle est
 * considérée comme une chaîne vide.
 *
 * Return: pointeur vers la nouvelle chaîne allouée, ou NULL
 * si l'allocation échoue.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1, size2;
	char *buff;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	if (n >= size2)
		n = size2;

	buff = malloc(sizeof(char) * (size1 + n + 1));
	if (buff == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		buff[i] = s1[i];
	{
		for (j = 0; j < n; j++)
			buff[i + j] = s2[j];
	}

	buff[i + n] = '\0';

	return (buff);
}
