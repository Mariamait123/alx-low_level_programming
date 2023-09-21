#include "main.h"
/**
  *leet - encodes a string into 1337
  *@c: input char
  *Return: char out put
  */
char *leet(char *c)
{
	int a = 0, t;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (c[a] != '\0')
	{
		for (t = 0; t < 10; t++)
		{
			if (c[a] == s1[t])
				c[a] = s2[t];
		}
		a++;
	}
	return (c);
}
