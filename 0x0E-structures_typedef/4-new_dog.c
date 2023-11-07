#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - creates a new dog
 *@name: of dog
 *@age: of dog
 *@owner: of dog
 *Description: structures
 */

dog_t *new_dog(char *name, float age, char *owner)
{
        size_t a, b, c;
        dog_t *dog;

        if (name == NULL || owner == NULL)
                return (NULL);
        dog = malloc(sizeof(dog_t));
        if (dog == NULL)
        {
                free(dog);
                return (NULL);
        }

        for (a = 0; name[0] != '\0'; a++)
        {
                a++;
                dog->name = malloc(sizeof(char) * a);
        }
        if (dog->name == NULL)
        {
                free(dog->name);
                return (NULL);
        }
        for (b = 0; b < a; b++)
        {
                dog->name[b] = name[b];
        }
        dog->age = age;
        for (c = 0; owner[c] != '\0'; c++)
        {
                c++;
        }
        dog->owner = malloc(sizeof(char) * c);
        if (dog->owner == NULL)
        {
                free(dog->owner);
                free(dog);
                return (NULL);
        }
        for (b = 0; b < c; b++)
                dog->owner[b] = owner[b];
        return (dog);
}
