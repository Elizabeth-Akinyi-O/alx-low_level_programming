#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - creates a new dog
 *@name: of dog
 *@age: of dog
 *@owner: of dog
 *
 *Description: structures
 *Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, c;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (a = 0; name[a]; a++)
		;
	a++;
	dog->name = malloc(a * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		dog->name[c] = name[c];
	dog->age = age;
	for (b = 0; owner[b]; b++)
		;
	b++;
	dog->owner = malloc(b * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (c = 0; c < b; c++)
		dog->owner[c] = owner[c];
	return (dog);
}
