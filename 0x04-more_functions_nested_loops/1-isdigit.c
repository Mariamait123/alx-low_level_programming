#include "main.h"
/**
  *_isdigit - checks for a digit
  *@c: checked digit
  *Return: 1 if c is a digit
  *returns 0 otherwise
  */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
