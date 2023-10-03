#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all the arguments
  *@ac: input ineger
  *@av: input array
  *Return: new array
  *returns NULL if av = 0 or ac = 0
  */
char *argstostr(int ac, char **av)
{
	char *c;
	int a = 0, b = 0, i = 0;

	if (av == 0 || ac == 0)
		return (NULL);
	for (; a < ac; a++)
		for (; av[a][b]; b++)
			i++;
	i += ac;
	c = malloc(sizeof(char *) * (i + 1));
	if (c == NULL)
		return (NULL);
	i = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			c[i] = av[a][b];
			i++;
		}
		if (av[a][b] == '\0')
			c[i++] = '\n';
	}
	return (c);

}
