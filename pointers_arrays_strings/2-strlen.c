#include <stdio.h>

/**
 * reset_to_98 - met la valeur de l'entier pointé à 98
 * @n: pointeur vers un entier à modifier
 * Return: rien.
 */

int _strlen(char *s)
{
    int length = 0;

    while (s[length] != '\0')
    {
        length++;
    }

    return length;
}