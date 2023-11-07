#ifndef DOG_HEADER
#define DOG_HEADER
/**
 *struct dog - defines a new struct with elements
 *@name: of dog
 *@age: of dog
 *@owner: of dog
 *Description: structures, typedef
 */
/*@dog_t: new name for the type struct dog*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* dog. h */
