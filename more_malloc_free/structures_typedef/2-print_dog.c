#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the content of a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: Prints the name, age, and owner of the dog.
 * If d is NULL, nothing is printed.
 * If name or owner is NULL, prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    if (d->name != NULL)
        printf("Name: %s\n", d->name);
    else
        printf("Name: (nil)\n");

    printf("Age: %.6f\n", d->age);

    if (d->owner != NULL)
        printf("Owner: %s\n", d->owner);
    else
        printf("Owner: (nil)\n");
}
