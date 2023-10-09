#include "dog.h"
#include <stdlib.h>
/**
  *init_dog - gives values for sturst d
  *@d: input struct
  *@name: input name
  *@age: input age
  *@owner: input owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
