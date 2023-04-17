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

#endif /* DOG_H */
