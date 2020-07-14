#ifndef _STRUCT_MY_DOG_
#define _STRUCT_MY_DOG_
/**
 * struct dog - struct to define my dog.
 * @name:  dog name.
 * @age: dog age.
 * @owner: dog owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif/*dog*/
