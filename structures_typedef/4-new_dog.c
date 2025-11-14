#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog (string to copy)
 * @age: age of the dog
 * @owner: owner of the dog (string to copy)
 *
 * Return: pointer to new dog_t, or NULL if something fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, len_name = 0, len_owner = 0;

	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";

	/* Compute lengths */
	while (name[len_name] != '\0')
		len_name++;

	while (owner[len_owner] != '\0')
		len_owner++;

	/* Allocate structure */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* Allocate name */
	d->name = malloc(len_name + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	/* Copy name */
	for (i = 0; i < len_name; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	/* Allocate owner */
	d->owner = malloc(len_owner + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	/* Copy owner */
	for (i = 0; i < len_owner; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	/* Set age */
	d->age = age;

	return (d);
}
