#ifndef DOG
#define DOG
/**
  * struct dog - the is strcut
  * @name: take a pointer
  * @age: take a float
  * @owner: take a pointer
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *, float, char *);
void print_dog(struct dog *d);
#endif
