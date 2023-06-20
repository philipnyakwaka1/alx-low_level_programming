#ifndef DOG_T_H
#define DOG_T_H
/**
 * struct dog - holds dog details
 * @name: dog name
 * @age: dog's age
 * @owner: dog owner
 *
 * Description: This struct will store information about a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);

#endif
