#include "main.h"
/**
  *rot13 -  encodes a string using rot13
  *@c: input char
  *Return: edited char
  */
char *rot13(char *c)
{
	int a, b;
	char m1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char m2[] = "abcdefghijklmnopqrstuvwxyz";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b < 26; b++)
		{
			if (c[a] == m1[b] || c[a] == m2[b])
				c[a] += 13;
		}
	}
}
