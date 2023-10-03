#include <stdlib.h>
#include "main.h"
/**
  *_strdup -  returns a pointer to a newly allocated memory
  *@str: input string
  *Return: new array
  *returns NULL if str is NULL
  */
char *_strdup(char *str)
{
	char *c;
	int a = 0, b;

	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a++;
	c = malloc(sizeof(char) * (a);
	if (c == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		c[b] = str[b];
	return (c);
}
