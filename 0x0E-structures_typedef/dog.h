#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
