#include <stdio.h>

/**
 * main - Entry point
 * Description: 'alphabet in reverse'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 122;

	do {
		putchar(a);
		a--;
	} while (a > 97);
	putchar('\n');
	return (0);
}
