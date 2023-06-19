#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 * @name: 1
 * @age: 2
 * @owner: 3
 * Description : longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;
#endif
