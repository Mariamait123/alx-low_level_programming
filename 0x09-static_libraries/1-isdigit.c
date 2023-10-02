#include "main.h"
/**
  *_isdigit - finds digits
  *@c: input integer
  *Return: 1 for digits otherwise 0
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
