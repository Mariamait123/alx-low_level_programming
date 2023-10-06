#include "main.h"
#include <stdlib.h>
/**
  *string_nconcat - a function that concatenates two strings
  *@s1: string input one
  *@s2: sring input two
  *@n: integer input
  *Return: pointer shall point to a newly allocated space in memory
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, s = 0;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	if (n < b)
		out = malloc(sizeof(char) * (n + 1 + a));
	else
		out = malloc(sizeof(char) * (b + 1 + a));
	if (out == NULL)
		return (NULL);
	while (c < a)
	{
		out[c] = s1[c];
		c++;
	}
	while (n < b && c < (a + n))
		out[c++] = s2[s++];
	while (n >= b && c < (a + b))
		out[c++] = s2[s++];
	out[c] = '\0';
	return (out);
}
