#include "main.h"
/**
  *rev_string - reverses a string
  *@s: input string
  */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char t;

	while(s[a] != '\0')
	{
		a++;
	}
	a--;
	while (b <= a)
	{
		t = s[b];
		s[b] = s[a];
		s[a] = t;
		b++;
		a--;
	}
}
