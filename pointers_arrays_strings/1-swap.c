#include <stdio.h>

/**
 * reset_to_98 - met la valeur de l'entier pointé à 98
 * @a: pointeur vers un entier à modifier
 * @b: pointeur vers un entier à modifier
 * Return: rien.
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
