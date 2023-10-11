#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The dog's basic info
 * @name: First part is the name of the dog
 * @age: Second part is the age of the dog
 * @owner: Third part is the owner of the dog
 * Description: Thid is the description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Needed typedef for struct dog task
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
