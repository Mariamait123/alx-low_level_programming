#include "main.h"
/**
  *_strcat - concatenates two strings
  *@dest: first string input
  *@src: string added at the end of dest
  *Return: new string is returned
  */
char *_strcat(char *dest, char *src)
{
	int a = 0, i = 0;

	while (dest[a] != '\0')
		a++;
	while (src[i] != '\0')
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
