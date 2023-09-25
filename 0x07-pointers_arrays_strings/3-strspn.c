#include "main.h"
/**
  *_strspn - gets the length of a prefix substring
  *@s: initial array input
  *@accept: array consist only of bytes
  *Return: number of bytes of s
  */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				c++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (c);
		}
	}
	return (c);
}
