#include "main.h"
/**
  *_strcpy - copies the string
  *@dest: has the vlaue of str
  *@src: string to be coppied
  *Return: value of dest
  */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = src[a];
	return (dest);
}
