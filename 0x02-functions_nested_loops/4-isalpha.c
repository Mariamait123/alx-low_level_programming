#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character checked
 * Return: 0 if c is a letter
 *Returns 0 otherwise
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
