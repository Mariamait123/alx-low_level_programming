#include "main.h"
/**
  *puts2 - prints every other character of a string
  *@str: input string
  */
void puts2(char *str)
{
	int a = 0, b = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	a--;
	while (a >= b)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
