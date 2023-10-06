#include "main.h"
#include <stdlib.h>
char *_mem(char *a, char b, unsigned int n);
/**
  *_calloc - allocates memory for an array
  *@nmemb: input integer
  *@size: input integer
  *Return: pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(size * nmemb);
	if (c == NULL)
		return (NULL);
	_mem(c, 0, size * nmemb);
	return (c);
}
/**
  *_mem - fills memory with a constant byte
  *@a: memory to be filled
  *@b: char copy
  *@n: number of copy
  *Return: new value of a
  */
char *_mem(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		a[i] = b;
	return (a);
}
