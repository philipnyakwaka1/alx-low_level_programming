#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}
		printf("Age: %f\n", (d->age) ? d->age : 0);

		if ((*d).owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
