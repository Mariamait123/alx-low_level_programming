#include "main.h"
/**
  *set_string - sets the value of a pointer to a char
  *@s: char value being changed
  *@to: input char
  */
void set_string(char **s, char *to)
{
	int a = 0;

	while (to[a] != '\0')
	{
		*s[a] = to[a];
		a++
	}
	*s[a] = '\0';
}
