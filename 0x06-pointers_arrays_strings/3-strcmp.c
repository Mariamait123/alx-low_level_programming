#include "main.h"
/**
  *_strcmp -  compares two strings
  *@s1: input string one
  *@s2: input string two
  *Return: the difference between s1 and s2
  */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, rt;

	while (s1[a] != '\0' && s2[b] != '\0')
	{
		if (s1[a] == s2[b])
			rt = 0;
		else
		{
			rt = s1[a] - s2[b];
			break;
		}
		a++;
		b++;
	}
	return (rt);
}
