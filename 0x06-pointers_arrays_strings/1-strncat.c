#include "main.h"
/**
  *_strncat - concatenates two strings
  *@dest: srting that comes first
  *@src: srting that is added
  *@n: determines how much src id added
  *Return: new dest string
  */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, i = 0;

	while (dest[a] != '\0')
		a++;
	while (i < n && src[i] != '\0')
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
