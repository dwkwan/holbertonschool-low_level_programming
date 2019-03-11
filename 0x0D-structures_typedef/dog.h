#ifndef _DOG_H
#define _DOG_H
int _putchar(char c);
/**
 * struct dog - defines a new type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /**_DOG_H*/