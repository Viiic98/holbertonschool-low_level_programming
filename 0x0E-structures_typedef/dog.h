#ifndef DOG_H
#define DOG_H
/**
 * struct dog - First structure
 * @name: value name
 * @age: value age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
