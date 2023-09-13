#include "main.h"
/**
 *_abs - computes the absolute value
 *@a: its absolute value found
 * Return: postive integer (Success)
 */
int _abs(int a)
{
	if (a < 0)
	{
		a *= -1;
		return (a);
	}
	else
		return (a);
}
