#include "main.h"
/**
  *rot13 -  encodes a string using rot13
  *@c: input char
  *Return: edited char
  */
char *rot13(char *c)
{
	int a, b;
	char m1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rt[] = "NOPQRSTUVQXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (c[a] == m1[b])
			{
				c[a] = rt[b];
				break;
			}
		}
	}
	return (c);
}
