#include "main.h"
/**
  *puts_half - prints half of string
  *@str: input string
  */
void puts_half(char *str)
{
	int a = 0;

	while (str[a] != '\0')
		a++;
	a /= 2;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
}
