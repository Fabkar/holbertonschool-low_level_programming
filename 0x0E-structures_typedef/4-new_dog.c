#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: Pointer RAMBO.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *RAMBO;
	int n, m;

	if (name == NULL || owner == NULL)
		return (NULL);

	RAMBO = malloc(sizeof(dog_t));
	if (!RAMBO)
		return (NULL);
	for (n = 0; name[n]; n++)
	{}
	(*RAMBO).name = malloc(sizeof(char) * (n + 1));
	if (!((*RAMBO).name))
	{
		free(RAMBO);
		return (NULL);
	}
	for (m = 0; m < (n + 1); m++)
		(*RAMBO).name[m] = name[m];
	for (n = 0; owner[n]; n++)
	{}
	(*RAMBO).owner = malloc(sizeof(char) * (n + 1));
	if (!((*RAMBO).owner))
	{
		free((*RAMBO).name);
		free(RAMBO);
		return (NULL);
	}
	for (m = 0; m < (n + 1); m++)
		(*RAMBO).owner[m] = owner[m];
	(*RAMBO).age = age;
	return (RAMBO);
}
