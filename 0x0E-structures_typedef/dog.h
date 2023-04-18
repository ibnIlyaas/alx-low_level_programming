#ifndef DOG_H
#define DOG_H

/*funx prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - new type definitio of type dog
 * @name: name
 * @age: age
 * @owner: owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}


#endif /*_DOG_H_*/
