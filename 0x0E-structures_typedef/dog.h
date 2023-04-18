#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type definitio of type dog
 * @name: name
 * @age: age
 * @owner: owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
/*funx prototypes*/                                               void init_dog(struct dog *d, char *name, float age, char *owner); void print_dog(struct dog *d);                                    dog_t *new_dog(char *name, float age, char *owner);               void free_dog(dog_t *d);

#endif /*_DOG_H_*/