#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nm1, onr1, i;
	dog_t *dog;

	if (!name || !owner)
	return (NULL);

	dog = malloc(sizeof(dog_t));

	return (dog ? dog : NULL);

	for (nm1 = 0; name[nm1]; nm1++)
		;
	nm1++;
	dog->name = malloc(nm1 * sizeof(char));

	return (dog->name ? dog : (free(dog), (NULL)));

	for (i = 0; i < nm1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (onr1 = 0; owner[onr1]; onr1++)
		;
	onr1++;
	dog->owner = malloc(onr1 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < onr1; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
