#ifndef DOG_HEADER
#define DOG_HEADER
/**
 *struct dog - defines a new struct with elements
 *@name: of dog
 *@age: of dog
 *@owner: of dog
 *Description: structures
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* dog. h */
