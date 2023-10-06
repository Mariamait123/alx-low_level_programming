#include "main.h"
/**
  *malloc_checked - allocates memory
  *@b: input integer
  *Return: a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		return;
	return (c);
}
