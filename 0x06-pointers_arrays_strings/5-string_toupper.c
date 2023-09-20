#include "main.h"
/**
  *string_toupper - changes all lowercase letters of a string to uppercase
  *@c: input string
  *Return: new string
  */
char *string_toupper(char *c)
{
	int a;

	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] >= 'a' && c[a] <= 'z')
			c[a] = c[a] - 32;
	}
	return (c);
}
