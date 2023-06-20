#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - finds the length of a string
 * @s: input string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != 0)
	{
		x++;
	}
	return (x);
}
/**
 * _strcpy - copies the string pointed by src to the buffer pointed by dest
 * @dest: pointer to buffer
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, y;

	y = _strlen(src);
	for (x = 0; x < y; x++)
	{
		dest[x] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new_dog, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int name_len, owner_len;


	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	name_len = _strlen(name) + 1;
	owner_len = _strlen(owner) + 1;
	(*ptr).name = malloc(sizeof(char) * name_len);
	if ((*ptr).name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	(*ptr).owner = malloc(sizeof(char) * owner_len);
	if ((*ptr).owner == NULL)
	{
		free((*ptr).name);
		free(ptr);
		return (NULL);
	}
	(*ptr).name = _strcpy((*ptr).name, name);
	(*ptr).owner = _strcpy((*ptr).name, owner);
	(*ptr).age = age;

	return (ptr);
}
