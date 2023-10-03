#include "main.h"
#include <stdlib.h>
/**
  *str_concat - function that concatenates two strings
  *@s1: string input one
  *@s2: string input two
  *Return: new array
  *returns NULL of faliure
  */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	c = malloc((a + b + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	b = a = 0;
	for (; s1[a] != '\0'; a++)
		c[a] = s1[a];
	for (; s2[b] != '\0'; a++)
	{
		c[a] = s2[b];
		b++;
	}
	c[a] = '\0';
	return (c);
}
