#include "main.h"
#include <stdlib.h>
/**
  *alloc_grid - returns a pointer to a 2 dimensional array
  *@width: integer input
  *@height: integer input
  *Return: new array
  *returns NULL for with and height is 0
  */
int **alloc_grid(int width, int height)
{
	int **c;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	c = malloc(sizeof(int *) * height);
	if (c == NULL)
		return (c);
	for (a = 0; a < height; a++)
	{
		c[a] = malloc(sizeof(int) * width);
		if (c[a] == NULL)
		{
			for (; a >= 0; a--)
				free(c[a]);
			free(c);
			return (NULL);
		}
	}
	for (a = 0; a < height ; a++)
	{
		for (b = 0; b < width; b++)
			c[a][b] = 0;
	}
	return (c);
}
