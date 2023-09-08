#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'numbers of base 16 in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	a = 97;
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
