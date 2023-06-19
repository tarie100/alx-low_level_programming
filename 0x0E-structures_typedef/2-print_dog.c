#include"dog.h"
#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * print_dog - prints struct
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d->owner == NULL)
	{
		printf("nil");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("nil");
	}
	if (d == NULL)
	{
		return;
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
