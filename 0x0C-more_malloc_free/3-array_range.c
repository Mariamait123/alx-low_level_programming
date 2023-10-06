#include <stdlib.h>
#include "main.h"
/**
  *array_range - creates an array of integers
  *@min: input integer
  *@max: input inetger
  *Return: the pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int *a;
	int s, c = 0;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	a = malloc(sizeof(int) * s);
	if (a == NULL)
		return (NULL);
	for (; min <= max; c++)
		a[c] = min++;
	return (a);
}
