#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - prints a struct dog
 *@d: The struct dog to be printed
 */
void pring_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0,)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->Age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else 
		printf("Owner: %s\n", d->owner);
}	
