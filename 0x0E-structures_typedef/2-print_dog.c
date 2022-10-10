#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", (*d).name);
	printf("\n");

	if (!(*d).age)
                printf("Age: (nil)");
        else
                printf("Age: %f", (*d).age);
	printf("\n");

	if ((*d).owner == NULL)
                printf("Owner: (nil)");
        else
                printf("Owner: %s", (*d).owner);
	printf("\n");
}
