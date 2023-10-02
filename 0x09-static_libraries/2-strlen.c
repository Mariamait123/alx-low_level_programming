#include "main.h"
/**
  *_strlen - finds length f string
  *@s: input string
  *Return: length of s
  */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
