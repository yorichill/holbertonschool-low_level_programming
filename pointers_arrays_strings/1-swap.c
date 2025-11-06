#include "main.h"

/**
 * swap_int - échange les valeurs de deux entiers
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le second entier
 *
 * Description: Cette fonction échange les valeurs pointées par a et b
 * sans utiliser de fonction de la bibliothèque standard.
 *
 * Return: rien
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
