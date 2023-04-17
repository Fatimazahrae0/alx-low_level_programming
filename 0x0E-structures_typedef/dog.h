#ifndef dog_h
#define dog_h
#include <stdio.h>
#include <string.h>
/**
 * struct dog - A struct representing a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This struct represents a dog and includes information
 * about its name, age, and owner.
 */

struct dog
{
char *name;
float age;
char *owner;

};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
