#ifndef DOG_H
#define DOG_H
/**
* struct dog - Structure représentant un chien
* @name: Pointeur vers le nom du chien (chaîne de caractères)
* @age: Âge du chien (nombre flottant)
* @owner: Pointeur vers le nom du propriétaire (chaîne de caractères)
*/

struct dog
{
	char *name;

	float age;

	char *owner;
};

/**
 * dog_t - Nouveau type pour struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);


#endif
