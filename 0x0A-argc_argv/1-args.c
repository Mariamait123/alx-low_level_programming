#include <stdio.h>
/**
  *main - Entery point
  *@argc: number os argument input
  *@argv: string of input argument
  *Return: always 0
  */
int main(int argc, char *argv[]__attribute__ ((unused)))
{
	int a;

	a = --argc;
	printf("%d\n", a);
	return (0);
}
