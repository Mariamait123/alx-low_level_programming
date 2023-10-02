#include "main.h"
/**
  *_strcat - change value of one array
  *@dest: input array
  *@src: input array
  *Return: new value of dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
