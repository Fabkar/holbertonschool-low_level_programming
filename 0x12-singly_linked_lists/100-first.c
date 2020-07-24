#include "lists.h"
/**
* tortoise_vs_hare - function with attribute to be \
*                    execute before than main function.
*Return: Nothing.
*/
void tortoise_vs_hare(void)__attribute__ ((constructor));
void tortoise_vs_hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
