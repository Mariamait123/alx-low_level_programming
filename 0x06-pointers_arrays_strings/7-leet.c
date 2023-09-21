#include "main.h"
/**
  *leet - encodes a string into 1337
  *@c: input char
  *Return: char out put
  */
char *leet(char *c)
{
	int a = 0;

	while (c[a] != '\0')
	{
		if (c[a] == 'a' || c[a] == 'A')
			c[a] = '4';
		if (c[a] == 'e' || c[a] == 'E')
			c[a] = '3';
		if (c[a] == 'o' || c[a] == 'O')
			c[a] = '0';
		if (c[a] == 't' || c[a] == 'T')
			c[a] = '7';
		if (c[a] == 'l' || c[a] == 'L')
			c[a] = '1';
		a++;
	}
	return (c);
}
