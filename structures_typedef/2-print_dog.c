#include<stdio.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: struct dog to print
*/
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
