#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;

	while (a < 123)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
			a++;
		}
		else
		{
			a++;
		}
	}
	putchar('\n');
	return (0);
}
