#ifndef DOG
#define DOG
/**
  * struct dog - the is strcut
  * @name: take a pointer
  * @age: take a float
  * @owner: take a pointer
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *, float, char *);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
