#include "main.h"
/**
  *_strpbrk - searches a string for any of a set of bytes
  *@s: string being searched
  *@accept: char array input
  *Return: pointer to the byte in s
  */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
				return (&s[a]);
		}
	}
	return (0);
}
