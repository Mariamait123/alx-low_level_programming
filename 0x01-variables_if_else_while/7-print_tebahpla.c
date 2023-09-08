#include <stdio.h>
/**
 * main - Entry point
 * Description: 'alphabet in reverse'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 122;

	while (a > 60)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
