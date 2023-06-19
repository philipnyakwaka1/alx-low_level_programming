#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes variable of type struct dog
 * @d: pointer to struct dog
 * @name: first parameter of struct dog
 * @age: second parameter of struct dog
 * @owner: thord parameter of struct dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		p = malloc(sizeof(struct dog));
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
