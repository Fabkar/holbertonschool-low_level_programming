#ifndef STRUCT_MY_DOG
#define TRUCT_MY_DOG
/**
 * struct dog - struct to define my dog.
 * @name:  dog name.
 * @age: dog age.
 * @owner: dog owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif/*dog*/
