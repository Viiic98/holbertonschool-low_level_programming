#ifndef DOG_H
#define DOG_H
/**
 * struct dog - First structure
 * @name: value name
 * @age: value age
 * @owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
