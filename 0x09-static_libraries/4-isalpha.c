#include "main.h"
/**
  *_isalpha - checks for alphabetic character
  *@c: input char
  *Return: 1 for letter, 0 otherwise
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
