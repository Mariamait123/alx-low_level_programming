#include "main.h"
/**
  *_strchr - locates a character in a string
  *@s: input array
  *@c: char being located
  *Return: pointer to the first occurrence of the character
  *returns NUll if character is not found
  */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
			return (&s[a]);
		a++;
	}
	return (0);
}
