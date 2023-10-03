#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates an array of chars
  *@size: size of array
  *@c: input char
  *Return: value of new array
  *returns NUUL is size is 0
  */
char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *x;

	x = malloc(size * sizeof(char));
	if (size == 0 || x == NULL)
		return (NULL);
	for (; a < size; a++)
		x[a] = c;
	return (x);

}
