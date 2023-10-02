#include "main.h"
/**
  *_strncat - combine two strings
  *@dest: input array
  *@src: input array
  *@n: input integer
  *Return: new value of dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
